#define MYLIBAPI  extern   "C"     __declspec( dllexport ) 
 
MYLIBAPI void say(wchar_t* pValue);
 
 struct UserStruct{
   long id;
   wchar_t*  name;
   int age;
};
 
MYLIBAPI void sayUser(UserStruct* pUserStruct);
 
struct CompanyStruct{
    long id;
   wchar_t*  name;
//  UserStruct*  users[100];
   UserStruct   users[100];
   int count;
};
 
struct CompanyStruct2{
    long id;
   wchar_t*  name;
  UserStruct*  users[100];
  // UserStruct   users[100];
   int count;
};
 
MYLIBAPI void sayCompany(CompanyStruct* pCompanyStruct);
 
MYLIBAPI void sayCompany2(CompanyStruct2* pCompanyStruct);
