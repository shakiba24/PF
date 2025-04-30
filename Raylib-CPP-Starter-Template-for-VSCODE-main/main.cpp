#include <raylib.h>
#include <iostream>

// Global Variables
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

bool inMenu = true;
bool inFinalLevel = false;
bool showInstructions = false;
bool gameOver = false;
bool isPaused = false;

int playerScore = 0;
int cpuScore = 0;

class Ball {
public:
    float x, y;
    int speedX, speedY;
    int radius = 20;

    void Reset(bool isFinalLevel) {
        x = SCREEN_WIDTH / 2;
        y = SCREEN_HEIGHT / 2;
        int baseSpeed = isFinalLevel ? 10 : 7;
        speedX = baseSpeed * (GetRandomValue(0, 1) ? 1 : -1);
        speedY = baseSpeed * (GetRandomValue(0, 1) ? 1 : -1);
    }

    void Update() {
        x += speedX;
        y += speedY;

        // Bounce on top and bottom walls
        if (y <= 0 || y + radius >= SCREEN_HEIGHT) speedY *= -1;

        // Check if Player 2 scores
        if (x + radius >= SCREEN_WIDTH) {
            cpuScore++;
            Reset(inFinalLevel);
        }

        // Check if Player 1 scores
        if (x - radius <= 0) {
            playerScore++;
            Reset(inFinalLevel);
        }
    }

    void Draw() {
        DrawCircle(x, y, radius, ORANGE);
    }
};

class Paddle {
public:
    float x, y;
    float width = 25, height = 120;
    int speed = 6;

    void Reset(float startX) {
        x = startX;
        y = SCREEN_HEIGHT / 2 - height / 2;
    }

    void Update(bool isPlayer1) {
        if (isPlayer1) {
            if (IsKeyDown(KEY_UP)) y -= speed;
            if (IsKeyDown(KEY_DOWN)) y += speed;
        } else {
            if (IsKeyDown(KEY_W)) y -= speed;
            if (IsKeyDown(KEY_S)) y += speed;
        }
        // Prevent paddles from moving outside the screen
        if (y < 0) y = 0;
        if (y + height > SCREEN_HEIGHT) y = SCREEN_HEIGHT - height;
    }

    void Draw() {
        DrawRectangleRounded({x, y, width, height}, 0.8f, 0, ORANGE);
    }
};

// Instances
Ball ball;
Paddle player1, player2;

// Draw Scores
void DrawScores() {
    DrawText(TextFormat("Player 1: %i", playerScore), SCREEN_WIDTH - 200, 10, 20, ORANGE);
    DrawText(TextFormat("Player 2: %i", cpuScore), 50, 10, 20, ORANGE);
}

// Draw Partition Line
void DrawPartitionLine() {
    DrawLine(SCREEN_WIDTH / 2, 0, SCREEN_WIDTH / 2, SCREEN_HEIGHT, GRAY);
}

// Draw Menu
void DrawMenu() {
    ClearBackground(BLACK);
    DrawText("PONG GAME", 250, 150, 50, ORANGE);
    DrawText("Press ENTER to Start", 200, 300, 30, ORANGE);
    DrawText("Press I for Instructions", 200, 350, 30, ORANGE);
}

// Draw Instructions
void DrawInstructions() {
    ClearBackground(BLACK);
    DrawText("INSTRUCTIONS", SCREEN_WIDTH / 2 - MeasureText("INSTRUCTIONS", 40) / 2, 100, 40, ORANGE);
    DrawText("Player 1: Arrow Keys", SCREEN_WIDTH / 2 - MeasureText("Player 1: Arrow Keys", 30) / 2, 200, 30, RED);
    DrawText("Player 2: W and S Keys", SCREEN_WIDTH / 2 - MeasureText("Player 2: W and S Keys", 30) / 2, 250, 30, RED);
    DrawText("First to 10 Points Wins", SCREEN_WIDTH / 2 - MeasureText("First to 10 Points Wins", 30) / 2, 300, 30, RED);
    DrawText("Press ENTER to Return", SCREEN_WIDTH / 2 - MeasureText("Press ENTER to Return", 30) / 2, 350, 30, ORANGE);
}

// Draw Ready for Final Level Prompt
void DrawFinalPrompt() {
    ClearBackground(DARKGRAY);
    DrawText("Ready for Final Level?", SCREEN_WIDTH / 2 - 200, 150, 30, YELLOW);
    DrawText("Press Y to Start or N to Quit", SCREEN_WIDTH / 2 - 200, 200, 30, ORANGE);
    DrawScores();
}

// Draw Final Level
void DrawFinalLevel() {
    ClearBackground(DARKBLUE);
    DrawPartitionLine();
    DrawScores();
    ball.Draw();
    player1.Draw();
    player2.Draw();
}

// Game Over Screen
void DrawGameOver() {
    ClearBackground(BLACK);
    DrawText("GAME OVER", SCREEN_WIDTH / 2 - MeasureText("GAME OVER", 50) / 2, SCREEN_HEIGHT / 2 - 100, 50, RED);
    DrawText((playerScore > cpuScore ? "Player 1 Wins!" : "Player 2 Wins!"), SCREEN_WIDTH / 2 - MeasureText(playerScore > cpuScore ? "Player 1 Wins!" : "Player 2 Wins!", 40) / 2, SCREEN_HEIGHT / 2 - 30, 40, ORANGE);
    DrawText("Press ENTER to Restart", SCREEN_WIDTH / 2 - MeasureText("Press ENTER to Restart", 30) / 2, SCREEN_HEIGHT / 2 + 40, 30, ORANGE);
}

// Collision Detection
void CheckCollisions() {
    if (CheckCollisionCircleRec({ball.x, ball.y}, ball.radius, {player1.x, player1.y, player1.width, player1.height})) {
        ball.speedX *= -1;
        ball.x = player1.x - ball.radius;
    }
    if (CheckCollisionCircleRec({ball.x, ball.y}, ball.radius, {player2.x, player2.y, player2.width, player2.height})) {
        ball.speedX *= -1;
        ball.x = player2.x + player2.width + ball.radius;
    }
}

int main() {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Pong Game");
    SetTargetFPS(60);

    // Initialize Ball and Paddles
    ball.Reset(false);
    player1.Reset(SCREEN_WIDTH - 35);
    player2.Reset(10);

    while (!WindowShouldClose()) {
        BeginDrawing();

        if (IsKeyPressed(KEY_P)) isPaused = !isPaused;

        if (isPaused) {
            ClearBackground(BLACK);
            DrawText("PAUSED", SCREEN_WIDTH / 2 - 50, SCREEN_HEIGHT / 2, 50, ORANGE);
        } else if (inMenu) {
            DrawMenu();
            if (IsKeyPressed(KEY_ENTER)) inMenu = false;
            if (IsKeyPressed(KEY_I)) {
                showInstructions = true;
                inMenu = false;
            }
        } else if (showInstructions) {
            DrawInstructions();
            if (IsKeyPressed(KEY_ENTER)) {
                showInstructions = false;
                inMenu = true;
            }
        } else if (gameOver) {
            DrawGameOver();
            if (IsKeyPressed(KEY_ENTER)) {
                inMenu = true;
                gameOver = false;
                playerScore = cpuScore = 0;
                ball.Reset(false);
            }
        } else if (playerScore >= 10 || cpuScore >= 10) {
            if (!inFinalLevel) {
                DrawFinalPrompt();
                if (IsKeyPressed(KEY_Y)) {
                    inFinalLevel = true;
                    playerScore = 0;  // Reset scores
                    cpuScore = 0;     // Reset scores
                    ball.Reset(true);
                }
                if (IsKeyPressed(KEY_N)) {
                    inMenu = true;
                }
            } else {
                DrawFinalLevel();
                ball.Update();
                player1.Update(true);
                player2.Update(false);
                CheckCollisions();

                if (playerScore >= 20 || cpuScore >= 20) gameOver = true;  // Winning condition for final level
            }
        } else {
            ClearBackground(inFinalLevel ? DARKBLUE : BLACK);
            DrawPartitionLine();
            DrawScores();
            ball.Update();
            player1.Update(true);
            player2.Update(false);
            CheckCollisions();
            ball.Draw();
            player1.Draw();
            player2.Draw();
        } 

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
