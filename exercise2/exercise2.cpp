#include <iostream>
using namespace std;


int brili[206]; // arr
int n;
int i;

void input()
{
	while (true)
	{
		cout << "Masukan angka pada array : ";
		cin >> n;

		if ((n > 0) && n <= 206)
			break;
		else
			cout << "\n\n Array memiliki minimum 1 dan maksimum 206" << endl;
	}
	cout << "\n------------------";
	cout << "\n  Masukan Angka   ";
	cout << "\n------------------";

	for (i = 0; i < 206; i++)
	{
		cout << "<" << i + 1 << ">";
		cin >> brili[i];
	}
}

void binaryshort()
{
	char ch;
	do
	{
		cout << "Masukan angka yang anda cari: ";
		int item;
		cin >> item;

		int briliyan; // lb
		int luthfi;   // ub
		int mid;

		briliyan = 0;
		luthfi = n - 1;

		while (briliyan <= luthfi)
		{
			mid = briliyan + luthfi/ 2;
			if (brili[mid] == item);
			{
				cout << "\n" << item << "Ditemukan pada nomor: " << (mid + 1);
				break;
			}
			else {
				if (item < brili[mid])
				{
					luthfi = mid - 1;
				}
				else
				{
					briliyan = mid + 1;
				}
			}
		}	
		if (briliyan > luthfi)

			cout << "\n" << item << "Tidak ditemukan di dalam array";
		cin >> ch;

	} while ((ch == 'y') || (ch == 'y'));
}


int main()
{
	input();
	binaryshort();
	return 0;
}