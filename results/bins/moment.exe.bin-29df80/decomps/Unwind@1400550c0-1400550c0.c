
void Unwind_1400550c0(undefined8 param_1,longlong param_2)

{
  std::locale::facet::~facet(*(facet **)(param_2 + 0x11d8));
  std::_Locinfo::_Locinfo_dtor((_Locinfo *)(param_2 + 0x700));
  if (*(void **)(param_2 + 0x758) != (void *)0x0) {
    free(*(void **)(param_2 + 0x758));
  }
  *(undefined8 *)(param_2 + 0x758) = 0;
  if (*(void **)(param_2 + 0x748) != (void *)0x0) {
    free(*(void **)(param_2 + 0x748));
  }
  *(undefined8 *)(param_2 + 0x748) = 0;
  if (*(void **)(param_2 + 0x738) != (void *)0x0) {
    free(*(void **)(param_2 + 0x738));
  }
  *(undefined8 *)(param_2 + 0x738) = 0;
  if (*(void **)(param_2 + 0x728) != (void *)0x0) {
    free(*(void **)(param_2 + 0x728));
  }
  *(undefined8 *)(param_2 + 0x728) = 0;
  if (*(void **)(param_2 + 0x718) != (void *)0x0) {
    free(*(void **)(param_2 + 0x718));
  }
  *(undefined8 *)(param_2 + 0x718) = 0;
  if (*(void **)(param_2 + 0x708) != (void *)0x0) {
    free(*(void **)(param_2 + 0x708));
  }
  *(undefined8 *)(param_2 + 0x708) = 0;
  std::_Lockit::~_Lockit((_Lockit *)(param_2 + 0x700));
  return;
}

