# Hands-on Pertemuan 14 — Rekursi dan Struct

Latihan bertingkat untuk fase Hands-on (45 menit) Pertemuan 14 Praktikum Pemrograman (IF25-11002, ITERA). Materinya ada di slide `01 Slide/P14 Rekursi dan Struct.pdf` dan `03 Modul/Modul 14 - Rekursi dan Struct.pdf`.

## Capaian

| Sub-CPMK | CPMK |
|---|---|
| 14.1 Menulis fungsi rekursif dengan kasus basis dan langkah rekursif yang tepat, serta mendefinisikan `struct` dan memproses array of struct | CPMK0607 (menerapkan) |
| 14.2 Menelusuri pemanggilan rekursif dengan pohon pemanggilan atau tumpukan panggilan, dan menjelaskan peran kasus basis serta akses anggota struct | CPMK0608 (menjelaskan) |

## Daftar latihan

| No | File | Tingkat | Waktu | Yang dilatih | Sub-CPMK |
|---|---|---|---|---|---|
| 1 | `handson1-rekursi.cpp` | Dasar | 10' | kasus basis dan langkah rekursif | 14.1 |
| 2 | `handson2-struct.cpp` | Menengah | 15' | `struct`, array of struct, maksimum | 14.1 |
| 3 | `handson3-basis.cpp` | Tantangan | 20' | pohon pemanggilan, perbaiki tiga kesalahan | 14.2 |
| + | `bonus-hanoi.cpp` | Pengayaan | sisa | rekursi bercabang klasik | 14.1 |

### 1. `handson1-rekursi.cpp`

Fungsi rekursif pangkat dan jumlah digit tanpa perulangan.

### 2. `handson2-struct.cpp`

Data mahasiswa sebagai array of struct: tabel, IPK tertinggi, dan banyak IPK 3.5 ke atas.

### 3. `handson3-basis.cpp`

Faktorial, Fibonacci, dan total stok rekursif dengan tiga kesalahan. Gambar pohon pemanggilan, perbaiki, dan jelaskan.

### Bonus. `bonus-hanoi.cpp`

Menara Hanoi tiga cakram beserta total langkahnya.

## Cara mengerjakan

**GDB Online.** Buka [onlinegdb.com](https://www.onlinegdb.com/online_c++_compiler), pilih C++, salin isi satu file dari `latihan/`, lengkapi bagian `TODO`, lalu klik Run. Bila program membaca masukan, ketik isi file yang sama namanya di `input/`. Bandingkan keluaran kalian dengan file di `expected/`, termasuk spasi.

**Komputer sendiri.** Dari folder ini jalankan `bash cek.sh`. Skrip mengompilasi setiap latihan dengan `-std=c++17 -Wall -Werror`, memberi masukan dari `input/`, lalu mencocokkan keluarannya dengan `expected/`. Keluaran yang diharapkan tidak memuat teks masukan, karena masukan dibaca dari file, bukan diketik.

## Aturan

Kerjakan berurutan. Diskusi dengan teman boleh. AI boleh untuk memahami pesan error, tidak untuk meminta solusi utuh. Hands-on tidak dinilai langsung; yang dinilai Exit Ticket 14 dan Tugas 14. Folder `solusi/` dipegang dosen dan tidak ikut di repo.
