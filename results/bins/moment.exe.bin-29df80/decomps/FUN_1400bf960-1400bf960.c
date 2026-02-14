
undefined8 * FUN_1400bf960(undefined8 *param_1,int param_2)

{
  *param_1 = std::_Node_str<char>::vftable;
  free((void *)param_1[5]);
  if (param_2 != 0) {
    free(param_1);
  }
  return param_1;
}

