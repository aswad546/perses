
int foo;
int bar;

void __attribute__ ((interrupt))
isr (void)
{
  if (!foo)
    while (bar & 0xFF30);
}
