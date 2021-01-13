#ifndef _par_h_
#define _par_h_

#include <iostream>
using namespace std;

template <typename T>
class Par {

	T *prvi , *drugi;

public:

	Par(const T& t1 ,const T& t2) {
		postaviPrvi(t1);
		postaviDrugi(t2);

	}
	Par() {
		prvi = nullptr;
		drugi = nullptr;
	}




	T* dohvatiPrvi() const { return prvi; }

	T* dohvatiDrugi() const { return drugi; }



	void postaviPrvi(T t) { prvi = &t; }
	void postaviDrugi(T t) { drugi = &t; }



	friend bool operator==(const Par& p1, const Par& p2) {
		if (p1.dohvatiPrvi() == p2.dohvatiPrvi() && p1.dohhvatiDrugi() == p2.dohhvatiDrugi()) return true;
		return false;
	}



	friend ostream& operator<<(ostream& it, const Par& p) {
		it << "[" << *p.dohvatiPrvi() << " - " << *p.dohvatiDrugi() << "]";
		return it;
	}


};


#endif _par_h_