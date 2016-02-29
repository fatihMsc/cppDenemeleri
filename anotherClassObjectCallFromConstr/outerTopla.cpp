cppDenemeleri/callAnotherConstructor/outerTopla

#include<iostream>
#include "outerTopla.h"

using namespace deneme;

outerTopla::outerTopla(int id){
	//outer=new outerTopla();
	std::cout<<"constructor baþladý:"<<id<<std::endl;
}



int outerTopla::toplama(int a, int b){
	//topla* abc1=new topla();
	int sonuc1=abc.toplama(a,b);
	std::cout<<"adana:"<<sonuc1<<std::endl;
	return 3;
}

void outerTopla::baslat(){
	//outer=abc;

	outer->toplama(4,5);
	int sonuc=abc.toplama(3,4);
	std::cout<<sonuc;
	
}



