#ifndef USER_H
#define USER_HAufgaben

Sie entwickeln Algorithmen für unsere mobilen Roboter als Teil des internationalen Projektteams.Sie pflegen die Dokumentation während der Neu - und Weiterentwicklung.

                                                                                                                                                Qualifikationen

                                                                                                                                                    Sie haben ein Bachelor -
    / Master - Studium im Bereich Informatik oder einem ähnlichen Studiengang erfolgreich abgeschlossen.Sie haben sich schon mit autonomen,
    mobilen Robotern beschäftigt.Sie haben sehr gute Kenntnisse und Erfahrung in der Programmierung in C++ und Python.Sie arbeiten selbstständig und fühlen sich in einer dynamischen Umfeld wohl.Sie sprechen gut Englisch und arbeiten gerne international.

    Benefits

        Spannende,
    komplexe Aufgaben
        Internationale Projekte mit der Möglichkeit zu reisen.Flexibilität und flache Hierarchien

            Was Sie mitbringen

                Programmierkenntnisse in C++ und Python
                    Gute Kenntnisse in ROS
                        Fähigkeit zum selbständigen Arbeiten
                            Gute Englischkenntnisse

#include <iostream>

    using namespace std;

class User
{
public:
    User() {}
    User(const string firstName, const string lastName, const uint32_t ssn) : firstName{firstName}, lastName{lastName}, ssn{ssn} {}
    string getFirstName() { return firstName; }
    string getLastName() { return lastName; }
    uint32_t getSSN() { return ssn; }

private:
    string firstName;
    string lastName;
    uint32_t ssn = 0;
};

#endif