#define F (1 << 14)

int INT_TO_FIXED_POINT(int n);
int CONVERT_TO_INT_NEAREST(int x);
int CONVERT_TO_INT_ZERO(int x);
int ADD(int x, int y);
int ADD_TO_INTEGER(int x, int n);
int SUB(int x, int y);
int SUB_AN_INTEGER(int x, int n);
int MUL(int x, int y);
int MUL_BY_INTEGER(int x, int y);
int DIV(int x, int y);
int DIV_BY_INTEGER(int x, int n);

int INT_TO_FIXED_POINT(int n)
{
  return n * F;
}

int CONVERT_TO_INT_NEAREST(int x)
{
   if (x>=0)
   return (x+F/2)/F;
 else
   return (x-F/2)/F;
}

int CONVERT_TO_INT_ZERO(int x)
{
  return x / F;
}

int ADD(int x, int y)
{
  return x + y;
}

int SUB(int x, int y)
{
  return x - y;
}

int ADD_TO_INTEGER(int x, int n)
{
  return x + INT_TO_FIXED_POINT(n);

}

int SUB_AN_INTEGER(int x, int n)
{
  return x - INT_TO_FIXED_POINT(n);
}

int MUL(int x, int y)
{
  return ((int64_t)x)*y/F;
}

int MUL_BY_INTEGER(int x, int n)
{
  return x * n;
}

int DIV(int x, int y)
{
  
return ((int64_t)x)*F/y;
}

int DIV_BY_INTEGER(int x, int n)
{
  return x / n;
}
