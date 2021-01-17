#include <iostream>
#include <fstream>
#include <string>
//TODO verifica daca tabelul exista deja
#define NR_COL_MAX 25


using namespace std;

struct Coloana
{
	string numeCol;
	string tipData;
	string valoareDefault = "";
	int nrIndecsi;
	int dimensiune;
};

class Tabel
{
private:
	string numeTabel = "-";
	int nrColoane = 0;
	int nrIntrari;
	int dimensiune;
	Coloana col[NR_COL_MAX];
	FILE* pf;

public:
	// functia citeste comenzi sql dintr-un fisier text
	void citeste(string numeTabel, string text)
	{
		ofstream file;
		file.open("tabele.txt", ios_base::app);
		file << numeTabel << " " << endl;
		file.close();

		file.open(numeTabel + ".txt");
		string cuvant;



		//if (text[0:5] == "CREATE")
		{
			//if (text[1] == "TABLE")
			{
				// Create table here
		
			}
		}
	}

	void display()
	{
		//operator <<
	}
	string getNume() { return numeTabel; }
	void setNume(string numeTabel) { this->numeTabel = numeTabel; }
	
	int getNrCol() { return nrColoane; }
	int getNrInr() { return nrIntrari; }

	void incrementCol() { nrColoane++; }
	void incrementInr() { nrIntrari++; }
};