#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;



void output(const vector<int>& risultato, string message);



int main(int argc, char* argv[]){
    int n = 0;
    cin>>n;
    vector<int> vettore(n, 0); // Inizializza con n elementi a 0

    for (int i = 0; i < n; i++) {
        cin>>vettore[i];
    }

    output(vettore, "\n- input inserito:");

    sort(vettore.begin(), vettore.end());
    output(vettore, "\n- vettore ordinato:");

    //OSS: max_element e min_element restituiscono un iteratore che punta all'elemento con il valore max (o min) nel vector.
    cout << "\n- valore massimo: " << *max_element(vettore.begin(), vettore.end()) << endl;
    cout << "- valore minimo: " << *min_element(vettore.begin(), vettore.end()) << endl;


    return 0;
}



void output(const vector<int>& risultato, string message){
    cout << message << endl;
    for (size_t i = 0; i < risultato.size(); ++i){
        if (i > 0) cout << " ";  // Aggiunge uno spazio solo tra gli elementi
        cout << risultato[i];
    }
    cout << endl;
}