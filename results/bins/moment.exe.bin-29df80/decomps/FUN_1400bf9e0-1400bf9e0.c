
facet * FUN_1400bf9e0(facet *param_1,int param_2)

{
  *(undefined ***)param_1 = std::collate<char>::vftable;
  free(*(void **)(param_1 + 0x18));
  std::locale::facet::~facet(param_1);
  if (param_2 != 0) {
    free(param_1);
  }
  return param_1;
}

