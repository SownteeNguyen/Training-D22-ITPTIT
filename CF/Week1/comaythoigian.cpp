#include <iostream>
#include <stdlib.h>
using namespace std;

bool check_date(int day, int month){
 if ((month==2) && (day>0) && (day<30)){
 return true;
 }
 if ((
 (month==1) ||
 (month==3) ||
 (month==5) ||
 (month==7) ||
 (month==8) ||
 (month==10)||
 (month==12)
 ) && ((day>0) && (day<32)))
 {
 return true;
 }
 if ((
 (month==4) ||
 (month==6) ||
 (month==9) ||
 (month==11)
 ) && ((day>0) && (day<31)))
 {
 return true;
 }
 return false;
}
 
 
// Kiem tra thang hop le
bool check_month(int month){
 if ((month>0) && (month<13)){
  return true;
 }else{
  return false;
 }
}
 
// Kiem tra nam hop le
bool check_year(int year){
 
 if ((year>999) && (year < 10000)){
 return true;
 }else{
 
 return false;
 }
 
}
// Kiem tra nam nhuan
bool check_leap_year(int year){
 if (((year % 4)==0) && ((year % 100)!=0)){
  return true;
 }else if ((year % 400)==0){
  return true;
 }else {
  return false;
 }
 
 
}
 
// Tim chính xác thu theo ngày tháng nam dã biêt
//
// http://en.wikipedia.org/wiki/Julian_day#Calculation
//
const char *get_day(int day, int month, int year){
  int JMD;
   JMD = (day + ((153 * (month + 12 * ((14 - month) / 12) - 3) + 2) / 5) +
     (365 * (year + 4800 - ((14 - month) / 12))) +
     ((year + 4800 - ((14 - month) / 12)) / 4) - 
    ((year + 4800 - ((14 - month) / 12)) / 100) + 
    ((year + 4800 - ((14 - month) / 12)) / 400)  - 32045) % 7;
 //cout << JMD;
 const char *weekday[] = {"Thu 2", 
   "Thu 3", 
   "Thu 4",
   "Thu 5", 
   "Thu 6", 
   "Thu 7", 
   "Chu nhat"};
 return weekday[JMD];
}
 
 
int main(){
 // Khai bao bien
 int year, month, date, x, y;
 
 
 cin >> year;
 
 if (check_year(year)){
  cout << "[-] Xac nhan!";
 }else{
  cout << "\n\t [-] Nhap sai!\n";
  exit(0);
 }
 
 
 cout << "\n[+] Vui long nhap thang  [MM] : ";
 cin >> month;
 
 // verify month
 if (check_month(month)){
  cout << "[-] Xac nhan!";
 }else{
  cout << "[-] Nhap sai!";
  exit(0);
 }
 cout << "\n[+] Vui long nhap ngay [DD] : ";
 cin >> date;
 
 
 // verify date
 if (check_date(date, month)){
  cout << "[-] Xac nhan!\n\n";
 }else{
  cout << "[-] Nhap sai!";
  exit(0);
 }
 cout << "[+] Ngay : " << date << ", Thang : " << month << ", Nam : " << year << " [ ";
 if (check_leap_year(year)){
  cout << "Nam nhuan" << " ]";
 }else{
  cout << "Khong phai nam nhuan" << " ]";
 }
 cout << "\n[-] Ngay trong tuan: ";
 cout << get_day(date, month, year);
 cout << "\n\n";
}
 
