//stores the pick up position
struct CartesianPos{
  unsigned long x;
  unsigned long y;
  void setHome(){
    x = 0;
    y = 0;
  }
};