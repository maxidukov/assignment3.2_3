#include <iostream>

struct address{
  std::string city, street;
  int building, app, post_code;
};
void show_address(const address*);

int main() {
  address address1 ={"Москва","Арбат",12,8,123456};
  //address address2 = {.building=59,.street="Пушкина",.post_code=953769,.city="Ижевск",.app=143}; //THROWS ERROR IN C++
  address address2 = {.city="Ижевск",.street="Пушкина",.building=59,.app=143,.post_code=953769};
  //address address2 = {"Ижевск","Пушкина",59,143,953769};
  show_address(&address1);
  show_address(&address2);
}

void show_address(const address* addr){
   std::cout<<"Город: "<<addr->city<<"\nУлица: "<<addr->street<<"\nНомер дома: "<<addr->building<<"\nНомер квартиры: "<<addr->app<<"\nИндекс: "<<addr->post_code<<"\n\n";
}
