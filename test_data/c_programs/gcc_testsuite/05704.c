


struct f
{
  struct {
      int i;
  } ff[10];
};

struct f g;
int ffff(int i)
{
  int t1 = 0;
  int i1 = g.ff[t1].i;
  int i2 = g.ff[i].i;
  return i1 + i2;
}
