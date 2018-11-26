#include "stdafx.h"
#include <locale.h>
#include <iostream>
#include "Out.h"
 
void  say(wchar_t* pValue){
     std::wcout.imbue(std::locale("chs"));
     std::wcout<<L"上帝说："<<pValue<<std::endl;
}
 
void sayUser(UserStruct* pUserStruct){
   std::wcout.imbue(std::locale("chs"));
   std::wcout<<L"ID:"<<pUserStruct->id<<std::endl;
   std::wcout<<L"姓名："<<pUserStruct->name<<std::endl;
   std::wcout<<L"年龄："<<pUserStruct->age<<std::endl;
}
 
void sayCompany(CompanyStruct* pCompanyStruct){
	 std::wcout.imbue(std::locale("chs"));
	 std::wcout<<L"ID:"<<pCompanyStruct->id<<std::endl;
	 std::wcout<<L"公司名称："<<pCompanyStruct->name<<std::endl;
	 std::wcout<<L"员工总数："<<pCompanyStruct->count<<std::endl;
     for(int i=0;i<pCompanyStruct->count;i++){
        sayUser(&pCompanyStruct->users[i]);
     }
}
 
void sayCompany2(CompanyStruct2* pCompanyStruct){
	std::wcout.imbue(std::locale("chs"));
	std::wcout<<L"ID:"<<pCompanyStruct->id<<std::endl;
	std::wcout<<L"公司名称："<<pCompanyStruct->name<<std::endl;
	std::wcout<<L"员工总数："<<pCompanyStruct->count<<std::endl;
     for(int i=0;i<pCompanyStruct->count;i++){
        sayUser(pCompanyStruct->users[i]);
     }
}
