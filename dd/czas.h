#ifndef czas_h
#define czas_h
#include <iostream>
#include <string>
using std::string;
class czas
{
    private:
	int godziny;
	int minuty;
	string nazwa;
public:
    czas(const czas& czas);
	czas();
	czas(int h, int m, string nazwa);
	czas(int h, int m);
	void dodajmin(int m);
	void dodajgodz(int h);
	void reset(int m = 0, int h = 0, string nazwa ="brak");
	void sprawdz(czas);
	czas operator+(const czas & t)const;
	czas operator-(const czas & t)const;
	czas operator*(double n)const;
	void poka() const;
	friend std::ostream& operator<<(std::ostream& wyjs,czas& czas);
	friend std::ostream& operator<<(std::ostream& wyjs,czas& czas);
	friend std::istream& operator>>(std::istream& wej,czas& czas);

};

#endif // !czas_h

