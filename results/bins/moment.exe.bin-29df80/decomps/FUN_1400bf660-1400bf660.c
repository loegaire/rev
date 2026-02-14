
undefined8 * FUN_1400bf660(undefined8 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if (param_2 != 0) {
    free(param_1);
  }
  return param_1;
}

