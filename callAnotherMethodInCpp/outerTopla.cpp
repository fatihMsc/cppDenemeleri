#include<iostream>
#include "outerTopla.h"

using namespace deneme;

outerTopla::outerTopla(int id){
	abc=new topla(3);
	std::cout<<"constructor baþladý:"<<id<<std::endl;
}



int outerTopla::toplama(int a, int b){
	//topla* abc1=new topla();
	int sonuc1=abc->toplama(a,b);
	std::cout<<"adana:"<<sonuc1<<std::endl;
	return 3;
}

void outerTopla::baslat(){
	//outer=abc;
	outerTopla outer(2);
	outer.toplama(1,2);
	toplama(4,5);
	int sonuc=abc->toplama(3,4);
	std::cout<<sonuc;
	toplama(2,8);
	
}



