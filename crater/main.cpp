#include <iostream>
#include "proto/message.pb.h"

using namespace std;
int main(int argc, char const *argv[])
{
  crater::Window w;

  const auto &dimension = w.mutable_dimension();

  dimension->set_y(200);
  dimension->set_x(23);


  const auto &position = w.mutable_position();

  position->set_x(2);
  position->set_y(34);

  w.set_id(1);
  cout << w.DebugString()  << endl;
  return 0;
}

