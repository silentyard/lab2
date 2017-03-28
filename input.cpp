#include"input.h"

Player::Player(){};

void Player::setK(int x){
	K=x;
}

void Player::setRa(double x){
	Ra=x;
}

void Player::setRb(double x){
	Rb=x;
}

int Player::getK(){
	return K;
}

double Player::getRa(){
	return Ra;
}

double Player::getRb(){
	return Rb;
}

double Player::cEa(){
	return 1/(1+pow(10,(Rb-Ra)/400));
}

double Player::cEb(){
	return 1/(1+pow(10,(Ra-Rb)/400));
}
