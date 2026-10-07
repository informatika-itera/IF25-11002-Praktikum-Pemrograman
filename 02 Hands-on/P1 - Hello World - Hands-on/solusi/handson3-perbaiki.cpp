// PENJELASAN (contoh jawaban)
// Kesalahan 1: baris #include, pesan "iostrem: No such file or directory",
//   nama pustaka salah ketik, seharusnya iostream.
// Kesalahan 2: baris count, pesan "'count' was not declared in this scope",
//   salah ketik; yang dikenal compiler adalah cout.
// Kesalahan 3: baris Hari, pesan "expected ';' before 'cout'",
//   pernyataan belum ditutup titik koma sehingga menyambung ke baris berikutnya.
// Kesalahan 4: baris Alat, peringatan "character constant too long for its type",
//   kutip tunggal hanya untuk satu karakter; teks harus memakai kutip ganda.
// Kesalahan 5: baris Folder, peringatan "unknown escape sequence: '\p'",
//   garis miring terbalik di dalam string harus ditulis \\.

#include <iostream>
using namespace std;

int main() {
    cout << "Jadwal Praktikum Minggu 1" << endl;
    cout << "Hari  : Senin" << endl;
    cout << "Ruang : Lab Komputer" << endl;
    cout << "Alat  : GDB Online" << endl;
    cout << "Folder: C:\\praktikum\\p1" << endl;
    return 0;
}
