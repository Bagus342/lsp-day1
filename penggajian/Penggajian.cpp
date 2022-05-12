#include <iostream>
using namespace std;

int pilihan, jam;
string nama;

void header()
{
    cout << "=====================================" << endl;
    cout << "******* APLIKASI GAJI PEGAWAI *******" << endl;
    cout << "=====================================" << endl;
    cout << "INPUT : " << endl;
    cout << "=====================================" << endl;
}

void output(int gaji, float lembur, float tunjangan, float pajak_p, float pajak_l, float total_p, int total)
{
    cout << "Nama Pegawai = " << nama << endl;
    cout << "Golongan = " << pilihan << endl;
    cout << "Gaji Pokok = " << gaji << endl;
    cout << "Upah Lembur = " << lembur << endl;
    cout << "Tunjangan Pegawai = " << tunjangan << endl;
    cout << "Pajak Gaji Pokok = " << pajak_p << endl;
    cout << "Pajak Gaji Lembur = " << pajak_l << endl;
    cout << "Total Pajak = " << total_p << endl;
    cout << "Total Gaji = " << total << endl;
}

float case1(int golongan, int jam)
{
    float tunjangan, lembur, pajak_pokok, pajak_lembur, total_pajak;
    int total, gaji_pokok;

    gaji_pokok = 3000000;
    if (jam > 160)
    {
        lembur = (jam - 160) * (gaji_pokok * 0.01);
    }
    else
    {
        lembur = 0;
    }
    tunjangan = gaji_pokok * 0.15;
    pajak_pokok = gaji_pokok * 0.005;
    pajak_lembur = lembur * 0.005;
    total_pajak = pajak_pokok + pajak_lembur;
    total = float(gaji_pokok + lembur + tunjangan - total_pajak);
    output(gaji_pokok, lembur, tunjangan, pajak_pokok, pajak_lembur, total_pajak, total);
}

float case2(int golongan, int jam)
{
    float tunjangan, lembur, pajak_pokok, pajak_lembur, total_pajak;
    int total, gaji_pokok;

    gaji_pokok = 3500000;
    if (jam > 160)
    {
        lembur = (jam - 160) * (gaji_pokok * 0.01);
    }
    else
    {
        lembur = 0;
    }
    tunjangan = gaji_pokok * 0.15;
    pajak_pokok = gaji_pokok * 0.005;
    pajak_lembur = lembur * 0.005;
    total_pajak = pajak_pokok + pajak_lembur;
    total = float(gaji_pokok + lembur + tunjangan - total_pajak);
    output(gaji_pokok, lembur, tunjangan, pajak_pokok, pajak_lembur, total_pajak, total);
}

float case3(int golongan, int jam)
{
    float tunjangan, lembur, pajak_pokok, pajak_lembur, total_pajak;
    int total, gaji_pokok;

    gaji_pokok = 4000000;
    if (jam > 160)
    {
        lembur = (jam - 160) * (gaji_pokok * 0.01);
    }
    else
    {
        lembur = 0;
    }
    tunjangan = gaji_pokok * 0.15;
    pajak_pokok = gaji_pokok * 0.005;
    pajak_lembur = lembur * 0.005;
    total_pajak = pajak_pokok + pajak_lembur;
    total = float(gaji_pokok + lembur + tunjangan - total_pajak);
    output(gaji_pokok, lembur, tunjangan, pajak_pokok, pajak_lembur, total_pajak, total);
}

float case4(int golongan, int jam)
{
    float tunjangan, lembur, pajak_pokok, pajak_lembur, total_pajak;
    int total, gaji_pokok;

    gaji_pokok = 4500000;
    if (jam > 160)
    {
        lembur = (jam - 160) * (gaji_pokok * 0.01);
    }
    else
    {
        lembur = 0;
    }
    tunjangan = gaji_pokok * 0.15;
    pajak_pokok = gaji_pokok * 0.005;
    pajak_lembur = lembur * 0.005;
    total_pajak = pajak_pokok + pajak_lembur;
    total = float(gaji_pokok + lembur + tunjangan - total_pajak);
    output(gaji_pokok, lembur, tunjangan, pajak_pokok, pajak_lembur, total_pajak, total);
}

int main()
{
    string exit;
    do
    {
        header();
        cout << "Masukkan Nama Pegawai = ";
        cin >> nama;
        cout << "Masukkan Golongan = ";
        cin >> pilihan;
        cout << "Masukkan Jumlah Jam Kerja = ";
        cin >> jam;
        cout << "=====================================" << endl;
        cout << "OUTPUT :" << endl;
        cout << "=====================================" << endl;
        switch (pilihan)
        {
        case 1:
            case1(pilihan, jam);
            cout << "Menghitung Lagi (y/t) = ";
            cin >> exit;
            break;
        case 2:
            case2(pilihan, jam);
            cout << "Menghitung Lagi (y/t) = ";
            cin >> exit;
            break;
        case 3:
            case3(pilihan, jam);
            cout << "Menghitung Lagi (y/t) = ";
            cin >> exit;
            break;
        case 4:
            case4(pilihan, jam);
            cout << "Menghitung Lagi (y/t) = ";
            cin >> exit;
            break;
        default:
            cout << "Inputan anda salah !!" << endl;
            cout << "Apakah ingin kembali (y/t) = ";
            cin >> exit;
            break;
        }
    } while (exit == "y");
    return 0;
}