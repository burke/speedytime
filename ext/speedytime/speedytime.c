#include "ruby.h"
#include <sys/time.h>

VALUE speedytime_current(void)
{
  struct timeval tv;
  gettimeofday(&tv, NULL);
  return INT2FIX(tv.tv_sec);
}

VALUE speedytime_current_i(void)
{
  struct timeval tv;
  gettimeofday(&tv, NULL);
  return INT2FIX(tv.tv_sec);
}

VALUE speedytime_current_f(void)
{
  struct timeval tv;
  gettimeofday(&tv, NULL);
  double prec = tv.tv_sec + (tv.tv_usec / 1000000.0);
  return DBL2NUM(prec);
}

void Init_speedytime(void)
{
  VALUE mSpeedytime = rb_define_module("Speedytime");
  rb_define_module_function(mSpeedytime, "current", speedytime_current_i, 0);
  rb_define_module_function(mSpeedytime, "current_f", speedytime_current_f, 0);
}
