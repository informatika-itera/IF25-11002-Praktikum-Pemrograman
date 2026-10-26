# Hands-on Pertemuan 12 — Sorting

Latihan bertingkat untuk fase Hands-on (45 menit) Pertemuan 12 Praktikum Pemrograman (IF25-11002, ITERA). Materinya ada di slide `01 Slide/P12 Sorting.pdf` dan `03 Modul/Modul 12 - Sorting.pdf`.

## Capaian

| Sub-CPMK | CPMK |
|---|---|
| 12.1 Menulis program yang mengurutkan array naik maupun turun dengan bubble sort dan selection sort, termasuk mengurutkan dua array sejajar sekaligus | CPMK0607 (menerapkan) |
| 12.2 Menelusuri isi array sesudah setiap putaran pengurutan dan menjelaskan banyak perbandingan serta pertukaran yang terjadi | CPMK0608 (menjelaskan) |

## Daftar latihan

| No | File | Tingkat | Waktu | Yang dilatih | Sub-CPMK |
|---|---|---|---|---|---|
| 1 | `handson1-bubble.cpp` | Dasar | 10' | bubble sort naik dengan jejak per putaran | 12.1 |
| 2 | `handson2-peringkat.cpp` | Menengah | 15' | selection sort turun, dua array sejajar | 12.1 |
| 3 | `handson3-tukar.cpp` | Tantangan | 20' | telusuri pertukaran, perbaiki tiga kesalahan | 12.2 |
| + | `bonus-hitung.cpp` | Pengayaan | sisa | bubble sort berhenti dini, hitung kerja | 12.1 |

### 1. `handson1-bubble.cpp`

Urutkan naik dengan bubble sort dan tampilkan isi array sesudah setiap putaran.

### 2. `handson2-peringkat.cpp`

Papan peringkat: urutkan skor turun dan nama ikut tertukar.

### 3. `handson3-tukar.cpp`

Bubble sort dengan tiga kesalahan. Tulis isi array sesudah setiap pertukaran di putaran pertama, perbaiki, dan jelaskan.

### Bonus. `bonus-hitung.cpp`

Hitung perbandingan dan pertukaran bubble sort berhenti dini untuk data terurut, terbalik, dan acak.

## Cara mengerjakan

**GDB Online.** Buka [onlinegdb.com](https://www.onlinegdb.com/online_c++_compiler), pilih C++, salin isi satu file dari `latihan/`, lengkapi bagian `TODO`, lalu klik Run. Bila program membaca masukan, ketik isi file yang sama namanya di `input/`. Bandingkan keluaran kalian dengan file di `expected/`, termasuk spasi.

**Komputer sendiri.** Dari folder ini jalankan `bash cek.sh`. Skrip mengompilasi setiap latihan dengan `-std=c++17 -Wall -Werror`, memberi masukan dari `input/`, lalu mencocokkan keluarannya dengan `expected/`. Keluaran yang diharapkan tidak memuat teks masukan, karena masukan dibaca dari file, bukan diketik.

## Aturan

Kerjakan berurutan. Diskusi dengan teman boleh. AI boleh untuk memahami pesan error, tidak untuk meminta solusi utuh. Hands-on tidak dinilai langsung; yang dinilai Exit Ticket 12 dan Tugas 12. Folder `solusi/` dipegang dosen dan tidak ikut di repo.
