#include<iostream>
#include"input.h"
#include<fstream>
#include<string>
#include<cstdlib>

using namespace std;
int main(){
	int K;
	double Ra,Rb,win;
	Player player;

	ifstream infile("file.in",ios::in);
	ofstream outfile("file.out",ios::out);
	
	if(!infile || !outfile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}

	infile>>K>>Ra>>Rb;
	player.setK(K);
	player.setRa(Ra);
	player.setRb(Rb);

	outfile<<int(player.getRa())<<"\t"<<int(player.getRb())<<endl;

	while(infile>>win){
		double Ea=player.cEa();
		double Eb=player.cEb();
		player.setRa(player.getRa() + player.getK() * (win-Ea));
		player.setRb(player.getRb() + player.getK() * ((1.0-win)-Eb));
		outfile<<int(player.getRa()+0.5)<<"\t"<<int(player.getRb()+0.5)<<endl;
	}
return 0;
}

