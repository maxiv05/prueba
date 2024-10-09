#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Estructura para representar un candidato
struct Candidato {
    int codigo;
    string nombre;
};

// Función para leer los datos de los candidatos
void leerCandidatos(vector<Candidato>& candidatos) {
    for (int i = 0; i < 9; i++) {
        Candidato candidato;
        candidato.codigo = i + 1;
        cout << "Ingrese el nombre del candidato " << candidato.codigo << ": ";
        cin >> candidato.nombre;
        candidatos.push_back(candidato);
    }
}

// Función para leer los votos de las mesas
void leerVotos(vector<vector><<int>>& votos, int mesas) {
    for (int i = 0; i < mesas; i++) {
        int barrio;
        cout << "Ingrese el código del barrio para la mesa " << i + 1 << ": ";
        cin >> barrio;
        barrio--; // Ajuste para índice de matriz

        for (int j = 0; j < 9; j++) {
            int voto;
            cout << "Ingrese los votos del candidato " << j + 1 << " en la mesa " << i + 1 << ": ";
            cin >> voto;
            votos[barrio][j] += voto;
        }
    }
}

// Función para calcular el total de votos y el porcentaje de asistencia
int calcularTotalVotos(const vector<vector<int>>& votos) {
    int totalVotos = 0;
    for (const auto& fila : votos) {
        for (int voto : fila) {
            totalVotos += voto;
        }
    }
    return totalVotos;
}

// Función para encontrar el candidato ganador
int encontrarGanador(const vector<Candidato>& candidatos, const vector<vector<int>>& votos) {
    vector<int> totalVotosCandidatos(9, 0);
    for (const auto& fila : votos) {
        for (int j = 0; j < 9; j++) {
            totalVotosCandidatos[j] += fila[j];
        }
    }

    int maxVotos = 0;
    int indiceGanador = 0;
    for (int i = 0; i < 9; i++) {
        if (totalVotosCandidatos[i] > maxVotos) {
            maxVotos = totalVotosCandidatos[i];
            indiceGanador = i;
        }
    }
    return indiceGanador;
}

// Función principal
int main() {
    int totalHabitantes;
    cout << "Ingrese la cantidad total de habitantes habilitados para votar: ";
    cin >> totalHabitantes;

    vector<Candidato> candidatos;
    leerCandidatos(candidatos);

    const int barrios = 15;
    const int mesas = 232;
    vector<vector<int>> votos(barrios, vector<int>(9, 0));

    leerVotos(votos, mesas);

    int totalVotos = calcularTotalVotos(votos);
    float porcentajeAsistencia = (totalVotos / (float)totalHabitantes) * 100;

    int indiceGanador = encontrarGanador(candidatos, votos);
    string nombreGanador = candidatos[indiceGanador].nombre;

    cout << "Porcentaje de asistencia al acto eleccionario: " << porcentajeAsistencia << "%" << endl;
    cout << "El candidato ganador es: " << nombreGanador << endl;

    int codigoBarrio;
    cout << "Ingrese el código del barrio para verificar si el ganador fue el más votado: ";
    cin >> codigoBarrio;
    codigoBarrio--; // Ajuste para índice de matriz

    bool ganadorEnBarrio = true;
    for (int j = 0; j < 9; j++) {
        if (j != indiceGanador && votos[codigoBarrio][j] > votos[codigoBarrio][indiceGanador]) {
            ganadorEnBarrio = false;
            break;
        }
    }

    if (ganadorEnBarrio) {
        cout << "El candidato ganador fue el más votado en el barrio " << codigoBarrio + 1 << endl;
    } else {
        cout << "El candidato ganador no fue el más votado en el barrio " << codigoBarrio + 1 << endl;
    }

    return 0;
}
