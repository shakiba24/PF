#include <iostream>
#include <string>
using namespace std;

struct Doctor {          
    int id;
    string name;
    string specialty;};

struct Patient {       
    int id;
    string name;
    string contact;};

struct Appointment {     
    Doctor doctor;
    Patient patient;
    string appointmentTime;};

void inputDoctorDetails(Doctor &doc) {   
    cout<<"Enter Doctorr ID: ";
    cin>> doc.id;
    cin.ignore(); 
    cout<<"Enter Doctor Name: ";
    getline(cin, doc.name);
    cout<<"Enter Doctor Specialty: ";
    getline(cin, doc.specialty);
}

void inputPatientDetails(Patient &pat) {   
    cout<<"Enter Patient ID: ";
    cin>> pat.id;
    cin.ignore();
    cout<<"Enter Patient Name: ";
    getline(cin, pat.name);
    cout<<"Enter Patient Contact: ";
    getline(cin, pat.contact);
}

void displayAppointmentDetails(const Appointment &appt) {
    cout<<"\nAppointment Details:\n";
    cout<<"Doctor Name: " <<appt.doctor.name << "\n";
    cout<<"Specialty: " <<appt.doctor.specialty << "\n";
    cout<<"Patient Name: "<<appt.patient.name << "\n";
    cout<<"Patient Contact: " <<appt.patient.contact << "\n";
    cout<<"Appointment Time: "<<appt.appointmentTime << "\n";
}

void displayDoctorSpecialtyAndPatientContact(const Appointment &appt) {
    cout<< "\nDoctor Specialty: "<<appt.doctor.specialty<< "\n";
    cout<< "Patient Contact: "<< appt.patient.contact<< "\n";
}

int main() {
    Appointment appt; 

    cout<<"Enter Doctor Details:\n";
    inputDoctorDetails(appt.doctor);

    cout<<"\nEnter Patient Details:\n";
    inputPatientDetails(appt.patient);

    cout<<"\nEnter Appoitmenmt Time: ";
    cin.ignore();
    getline(cin, appt.appointmentTime);

    displayAppointmentDetails(appt);
    displayDoctorSpecialtyAndPatientContact(appt);
    return 0;
}
