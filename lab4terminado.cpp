#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuarioCorrecto = "admin";
    string claveCorrecta = "1234";
    string usuario, clave;

    int intentos = 0;
    bool loginExitoso = false;

    // Login con máximo 3 intentos
    while (intentos < 3 && !loginExitoso) {
        cout << "Usuario: ";
        cin >> usuario;
        cout << "Clave: ";
        cin >> clave;

        if (usuario == usuarioCorrecto && clave == claveCorrecta) {
            loginExitoso = true;
        } else {
            cout << "Credenciales incorrectas. Intente de nuevo.\n";
            intentos++;
        }
    }

    if (!loginExitoso) {
        cout << "Maximo de intentos alcanzado. Programa terminado.\n";
        return 0;
    }

    int opcion;
    do {
        cout << "\n===== CALCULADORA =====\n";
        cout << "1. Sumar\n";
        cout << "2. Restar\n";
        cout << "3. Multiplicar\n";
        cout << "4. Dividir\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            double a, b;
            cout << "Ingrese el primer numero: ";
            cin >> a;
            cout << "Ingrese el segundo numero: ";
            cin >> b;

            if (opcion == 1) {
                cout << "Resultado: " << (a + b) << endl;
            } else if (opcion == 2) {
                cout << "Resultado: " << (a - b) << endl;
            } else if (opcion == 3) {
                cout << "Resultado: " << (a * b) << endl;
            } else if (opcion == 4) {
                if (b != 0) {
                    cout << "Resultado: " << (a / b) << endl;
                } else {
                    cout << "Error: No se puede dividir entre cero.\n";
                }
            }
        } else if (opcion != 5) {
            cout << "Opcion invalida.\n";
        }

    } while (opcion != 5);

    cout << "Programa finalizado.\n";
    return 0;
}