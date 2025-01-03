# Sintassi C++ per Competitive Programming

Questo repository contiene esercizi di programmazione in C++ con focus sulla sintassi e sulle strutture dati fondamentali, in particolare **array** e **stringhe**. Il linguaggio C++ è scelto per i suoi vantaggi rispetto al C in contesti di competizioni di programmazione, come funzionalità avanzate e librerie più complete.

## Perché scegliere C++ invece di C per Competitive Programming?

Ci sono diversi motivi per cui il C++ è spesso preferito rispetto al C nelle competizioni di programmazione, tra cui:

### 1. **Libreria Standard (STL)**

C++ offre una libreria standard (STL) che include strutture dati avanzate e algoritmi ottimizzati. Ad esempio:

- **`std::vector`**: Una versione dinamica e sicura degli array in C, che permette di ridimensionare automaticamente l'array durante l'esecuzione.
- **Algoritmi STL**: Funzioni come `std::sort`, `std::find`, `std::max_element`, che rendono il codice più compatto e leggibile senza bisogno di implementare manualmente questi algoritmi.
- **`std::string`**: Gestione avanzata delle stringhe, che permette operazioni come concatenazione, ricerca, e slicing senza la necessità di gestire buffer e puntatori manualmente.

### 2. **Gestione della Memoria**

C++ offre funzioni avanzate per la gestione della memoria come `new`, `delete`, e soprattutto smart pointers (`std::unique_ptr`, `std::shared_ptr`) per evitare memory leaks e migliorare la sicurezza del codice.

### 3. **Programmazione Orientata agli Oggetti (OOP)**

Anche se la programmazione orientata agli oggetti non è sempre necessaria in un contesto di competitive programming, la possibilità di utilizzare **classi** e **oggetti** aiuta a organizzare il codice in modo più modulare e manutenibile. In C++ è anche possibile sfruttare funzionalità come l'overloading degli operatori e i template per una maggiore flessibilità.

### 4. **Velocità e Ottimizzazione**

C++ è un linguaggio molto veloce e viene compilato in codice nativo, che lo rende ideale per risolvere problemi complessi in tempi stretti. Inoltre, C++ offre ottimizzazioni tramite `inline functions`, `constexpr` e la possibilità di scrivere codice altamente performante.

### 5. **Supporto alla Programmazione Generica**

Con i **template**, è possibile scrivere funzioni e classi generiche in modo che possano lavorare con qualsiasi tipo di dato, migliorando la riusabilità del codice.

## Contenuto della Cartella

La cartella contiene i seguenti file:

1. **`array.cpp`**: Un file di esempio che contiene codice C++ per esercitarsi con gli **array**. In questo file troverai implementazioni di operazioni di base sugli array come ordinamento, ricerca e manipolazione di sottoinsiemi.

2. **`Makefile`**: Un file di configurazione per facilitare la compilazione del progetto. Con il Makefile, puoi compilare il tuo codice velocemente usando il comando:
   ```bash
   make array
   ```
   Questo genererà il file eseguibile `array` dalla sorgente `array.cpp`.

## Istruzioni

Per eseguire il codice, segui questi passaggi:

1. Compila il progetto usando `make`:
   ```bash
   make array
   ```

2. Esegui il programma:
   ```bash
   ./array
   ```

