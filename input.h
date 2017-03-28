#ifndef INPUT
#define INPUT
#include<cmath>

class Player{
	public:
		Player();
		void setK(int x);
		void setRa(double x);
		void setRb(double x);
		
		int getK();
		double getRa();
		double getRb();

		double cEa();
		double cEb();

	private:
		int K;
		double Ra,Rb;
};

#endif
