




unsigned int
f1 (unsigned int x, unsigned int y)
{
  return (x << y) | (x >> (8 * 4 - y));
}

unsigned int
f2 (unsigned int x, unsigned long int y)
{
  return (x << y) | (x >> (8 * 4 - y));
}

unsigned int
f3 (unsigned int x, int y __attribute__((unused)))
{
  return (x << 1) | (x >> (8 * 4 - 1));
}

unsigned int
f4 (unsigned int x, int y __attribute__((unused)))
{
  return (x << (8 * 4 - 1)) | (x >> 1);
}

unsigned short int
f5 (unsigned short int x, unsigned int y)
{
  return (x << y) | (x >> (8 * 2 - y));
}

unsigned short int
f6 (unsigned short int x, unsigned long int y)
{
  return (x << y) | (x >> (8 * 2 - y));
}

unsigned char
f7 (unsigned char x, unsigned int y)
{
  return (x << y) | (x >> (8 - y));
}

unsigned char
f8 (unsigned char x, unsigned long int y)
{
  return (x << y) | (x >> (8 - y));
}

unsigned int
f9 (unsigned int x, unsigned int y)
{
  return (x << y) | (x >> (8 * sizeof (unsigned int) - y));
}

unsigned int
f10 (unsigned int x, unsigned long int y)
{
  return (x << y) | (x >> (8 * sizeof (unsigned int) - y));
}

unsigned int
f11 (unsigned int x, int y __attribute__((unused)))
{
  return (x << 1) | (x >> (8 * sizeof (unsigned int) - 1));
}

unsigned int
f12 (unsigned int x, int y __attribute__((unused)))
{
  return (x << (8 * sizeof (unsigned int) - 1)) | (x >> 1);
}

unsigned short int
f13 (unsigned short int x, unsigned int y)
{
  return (x << y) | (x >> (8 * sizeof (unsigned short) - y));
}

unsigned short int
f14 (unsigned short int x, unsigned long int y)
{
  return (x << y) | (x >> (8 * sizeof (unsigned short) - y));
}

unsigned char
f15 (unsigned char x, unsigned int y)
{
  return (x << y) | (x >> (8 * sizeof (unsigned char) - y));
}

unsigned char
f16 (unsigned char x, unsigned long int y)
{
  return (x << y) | (x >> (8 * sizeof (unsigned char) - y));
}

unsigned int
f17 (unsigned int x, unsigned int y)
{
  return (x >> (8 * 4 - y)) ^ (x << y);
}

unsigned int
f18 (unsigned int x, unsigned long int y)
{
  return (x >> (8 * 4 - y)) ^ (x << y);
}

unsigned int
f19 (unsigned int x, int y __attribute__((unused)))
{
  return (x >> (8 * 4 - 1)) ^ (x << 1);
}

unsigned int
f20 (unsigned int x, int y __attribute__((unused)))
{
  return (x >> 1) ^ (x << (8 * 4 - 1));
}

unsigned short int
f21 (unsigned short int x, unsigned int y)
{
  return (x >> (8 * 2 - y)) ^ (x << y);
}

unsigned short int
f22 (unsigned short int x, unsigned long int y)
{
  return (x >> (8 * 2 - y)) ^ (x << y);
}

unsigned char
f23 (unsigned char x, unsigned int y)
{
  return (x >> (8 - y)) ^ (x << y);
}

unsigned char
f24 (unsigned char x, unsigned long int y)
{
  return (x >> (8 - y)) ^ (x << y);
}

unsigned int
f25 (unsigned int x, unsigned int y)
{
  return (x >> (8 * sizeof (unsigned int) - y)) ^ (x << y);
}

unsigned int
f26 (unsigned int x, unsigned long int y)
{
  return (x >> (8 * sizeof (unsigned int) - y)) ^ (x << y);
}

unsigned int
f27 (unsigned int x, int y __attribute__((unused)))
{
  return (x >> (8 * sizeof (unsigned int) - 1)) ^ (x << 1);
}

unsigned int
f28 (unsigned int x, int y __attribute__((unused)))
{
  return (x >> 1) ^ (x << (8 * sizeof (unsigned int) - 1));
}

unsigned short int
f29 (unsigned short int x, unsigned int y)
{
  return (x >> (8 * sizeof (unsigned short) - y)) ^ (x << y);
}

unsigned short int
f30 (unsigned short int x, unsigned long int y)
{
  return (x >> (8 * sizeof (unsigned short) - y)) ^ (x << y);
}

unsigned char
f31 (unsigned char x, unsigned int y)
{
  return (x >> (8 * sizeof (unsigned char) - y)) ^ (x << y);
}

unsigned char
f32 (unsigned char x, unsigned long int y)
{
  return (x >> (8 * sizeof (unsigned char) - y)) ^ (x << y);
}

unsigned int
f33 (unsigned int x, unsigned int y)
{
  return (x >> y) | (x << (8 * 4 - y));
}

unsigned int
f34 (unsigned int x, unsigned long int y)
{
  return (x >> y) | (x << (8 * 4 - y));
}

unsigned int
f35 (unsigned int x, int y __attribute__((unused)))
{
  return (x >> 1) | (x << (8 * 4 - 1));
}

unsigned int
f36 (unsigned int x, int y __attribute__((unused)))
{
  return (x >> (8 * 4 - 1)) | (x << 1);
}

unsigned short int
f37 (unsigned short int x, unsigned int y)
{
  return (x >> y) | (x << (8 * 2 - y));
}

unsigned short int
f38 (unsigned short int x, unsigned long int y)
{
  return (x >> y) | (x << (8 * 2 - y));
}

unsigned char
f39 (unsigned char x, unsigned int y)
{
  return (x >> y) | (x << (8 - y));
}

unsigned char
f40 (unsigned char x, unsigned long int y)
{
  return (x >> y) | (x << (8 - y));
}

unsigned int
f41 (unsigned int x, unsigned int y)
{
  return (x >> y) | (x << (8 * sizeof (unsigned int) - y));
}

unsigned int
f42 (unsigned int x, unsigned long int y)
{
  return (x >> y) | (x << (8 * sizeof (unsigned int) - y));
}

unsigned int
f43 (unsigned int x, int y __attribute__((unused)))
{
  return (x >> 1) | (x << (8 * sizeof (unsigned int) - 1));
}

unsigned int
f44 (unsigned int x, int y __attribute__((unused)))
{
  return (x >> (8 * sizeof (unsigned int) - 1)) | (x << 1);
}

unsigned short int
f45 (unsigned short int x, unsigned int y)
{
  return (x >> y) | (x << (8 * sizeof (unsigned short) - y));
}

unsigned short int
f46 (unsigned short int x, unsigned long int y)
{
  return (x >> y) | (x << (8 * sizeof (unsigned short) - y));
}

unsigned char
f47 (unsigned char x, unsigned int y)
{
  return (x >> y) | (x << (8 * sizeof (unsigned char) - y));
}

unsigned char
f48 (unsigned char x, unsigned long int y)
{
  return (x >> y) | (x << (8 * sizeof (unsigned char) - y));
}

unsigned int
f49 (unsigned int x, unsigned int y)
{
  return (x << (8 * 4 - y)) ^ (x >> y);
}

unsigned int
f50 (unsigned int x, unsigned long int y)
{
  return (x << (8 * 4 - y)) ^ (x >> y);
}

unsigned int
f51 (unsigned int x, int y __attribute__((unused)))
{
  return (x << (8 * 4 - 1)) ^ (x >> 1);
}

unsigned int
f52 (unsigned int x, int y __attribute__((unused)))
{
  return (x << 1) ^ (x >> (8 * 4 - 1));
}

unsigned short int
f53 (unsigned short int x, unsigned int y)
{
  return (x << (8 * 2 - y)) ^ (x >> y);
}

unsigned short int
f54 (unsigned short int x, unsigned long int y)
{
  return (x << (8 * 2 - y)) ^ (x >> y);
}

unsigned char
f55 (unsigned char x, unsigned int y)
{
  return (x << (8 - y)) ^ (x >> y);
}

unsigned char
f56 (unsigned char x, unsigned long int y)
{
  return (x << (8 - y)) ^ (x >> y);
}

unsigned int
f57 (unsigned int x, unsigned int y)
{
  return (x << (8 * sizeof (unsigned int) - y)) ^ (x >> y);
}

unsigned int
f58 (unsigned int x, unsigned long int y)
{
  return (x << (8 * sizeof (unsigned int) - y)) ^ (x >> y);
}

unsigned int
f59 (unsigned int x, int y __attribute__((unused)))
{
  return (x << (8 * sizeof (unsigned int) - 1)) ^ (x >> 1);
}

unsigned int
f60 (unsigned int x, int y __attribute__((unused)))
{
  return (x << 1) ^ (x >> (8 * sizeof (unsigned int) - 1));
}

unsigned short int
f61 (unsigned short int x, unsigned int y)
{
  return (x << (8 * sizeof (unsigned short) - y)) ^ (x >> y);
}

unsigned short int
f62 (unsigned short int x, unsigned long int y)
{
  return (x << (8 * sizeof (unsigned short) - y)) ^ (x >> y);
}

unsigned char
f63 (unsigned char x, unsigned int y)
{
  return (x << (8 * sizeof (unsigned char) - y)) ^ (x >> y);
}

unsigned char
f64 (unsigned char x, unsigned long int y)
{
  return (x << (8 * sizeof (unsigned char) - y)) ^ (x >> y);
}

unsigned int
f65 (unsigned int x, unsigned int y)
{
  return (x << y) + (x >> (8 * 4 - y));
}

unsigned int
f66 (unsigned int x, unsigned long int y)
{
  return (x << y) + (x >> (8 * 4 - y));
}

unsigned int
f67 (unsigned int x, int y __attribute__((unused)))
{
  return (x << 1) + (x >> (8 * 4 - 1));
}

unsigned int
f68 (unsigned int x, int y __attribute__((unused)))
{
  return (x << (8 * 4 - 1)) + (x >> 1);
}

unsigned short int
f69 (unsigned short int x, unsigned int y)
{
  return (x << y) + (x >> (8 * 2 - y));
}

unsigned short int
f70 (unsigned short int x, unsigned long int y)
{
  return (x << y) + (x >> (8 * 2 - y));
}

unsigned char
f71 (unsigned char x, unsigned int y)
{
  return (x << y) + (x >> (8 - y));
}

unsigned char
f72 (unsigned char x, unsigned long int y)
{
  return (x << y) + (x >> (8 - y));
}

unsigned int
f73 (unsigned int x, unsigned int y)
{
  return (x << y) + (x >> (8 * sizeof (unsigned int) - y));
}

unsigned int
f74 (unsigned int x, unsigned long int y)
{
  return (x << y) + (x >> (8 * sizeof (unsigned int) - y));
}

unsigned int
f75 (unsigned int x, int y __attribute__((unused)))
{
  return (x << 1) + (x >> (8 * sizeof (unsigned int) - 1));
}

unsigned int
f76 (unsigned int x, int y __attribute__((unused)))
{
  return (x << (8 * sizeof (unsigned int) - 1)) + (x >> 1);
}

unsigned short int
f77 (unsigned short int x, unsigned int y)
{
  return (x << y) + (x >> (8 * sizeof (unsigned short) - y));
}

unsigned short int
f78 (unsigned short int x, unsigned long int y)
{
  return (x << y) + (x >> (8 * sizeof (unsigned short) - y));
}

unsigned char
f79 (unsigned char x, unsigned int y)
{
  return (x << y) + (x >> (8 * sizeof (unsigned char) - y));
}

unsigned char
f80 (unsigned char x, unsigned long int y)
{
  return (x << y) + (x >> (8 * sizeof (unsigned char) - y));
}

unsigned int
f81 (unsigned int x, unsigned int y)
{
  return (x << (8 * 4 - y)) + (x >> y);
}

unsigned int
f82 (unsigned int x, unsigned long int y)
{
  return (x << (8 * 4 - y)) + (x >> y);
}

unsigned int
f83 (unsigned int x, int y __attribute__((unused)))
{
  return (x << (8 * 4 - 1)) + (x >> 1);
}

unsigned int
f84 (unsigned int x, int y __attribute__((unused)))
{
  return (x << 1) + (x >> (8 * 4 - 1));
}

unsigned short int
f85 (unsigned short int x, unsigned int y)
{
  return (x << (8 * 2 - y)) + (x >> y);
}

unsigned short int
f86 (unsigned short int x, unsigned long int y)
{
  return (x << (8 * 2 - y)) + (x >> y);
}

unsigned char
f87 (unsigned char x, unsigned int y)
{
  return (x << (8 - y)) + (x >> y);
}

unsigned char
f88 (unsigned char x, unsigned long int y)
{
  return (x << (8 - y)) + (x >> y);
}

unsigned int
f89 (unsigned int x, unsigned int y)
{
  return (x << (8 * sizeof (unsigned int) - y)) + (x >> y);
}

unsigned int
f90 (unsigned int x, unsigned long int y)
{
  return (x << (8 * sizeof (unsigned int) - y)) + (x >> y);
}

unsigned int
f91 (unsigned int x, int y __attribute__((unused)))
{
  return (x << (8 * sizeof (unsigned int) - 1)) + (x >> 1);
}

unsigned int
f92 (unsigned int x, int y __attribute__((unused)))
{
  return (x << 1) + (x >> (8 * sizeof (unsigned int) - 1));
}

unsigned short int
f93 (unsigned short int x, unsigned int y)
{
  return (x << (8 * sizeof (unsigned short) - y)) + (x >> y);
}

unsigned short int
f94 (unsigned short int x, unsigned long int y)
{
  return (x << (8 * sizeof (unsigned short) - y)) + (x >> y);
}

unsigned char
f95 (unsigned char x, unsigned int y)
{
  return (x << (8 * sizeof (unsigned char) - y)) + (x >> y);
}

unsigned char
f96 (unsigned char x, unsigned long int y)
{
  return (x << (8 * sizeof (unsigned char) - y)) + (x >> y);
}
