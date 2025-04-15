#ifndef EXO2_H
#define EXO2_H
class Mammals
{
public:
  void print();
};
class marineanimals 
{
public:
  void print();
};
class BlueWhale : public Mammals, public marineanimals
{
public:
  void print();
};

#endif