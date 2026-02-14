
void Unwind_140102280(undefined8 param_1,longlong param_2)

{
  void *_Memory;
  
  std::locale::facet::~facet(*(facet **)(param_2 + 0xf0));
  std::_Locinfo::_Locinfo_dtor((_Locinfo *)(param_2 + 0x38));
  if (*(void **)(param_2 + 0x90) != (void *)0x0) {
    free(*(void **)(param_2 + 0x90));
  }
  *(undefined8 *)(param_2 + 0x90) = 0;
  _Memory = *(void **)(param_2 + 0x80);
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *(undefined8 *)(param_2 + 0x80) = 0;
  if (*(void **)(param_2 + 0x70) != (void *)0x0) {
    free(*(void **)(param_2 + 0x70));
  }
  *(undefined8 *)(param_2 + 0x70) = 0;
  if (*(void **)(param_2 + 0x60) != (void *)0x0) {
    free(*(void **)(param_2 + 0x60));
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  if (*(void **)(param_2 + 0x50) != (void *)0x0) {
    free(*(void **)(param_2 + 0x50));
  }
  *(undefined8 *)(param_2 + 0x50) = 0;
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    free(*(void **)(param_2 + 0x40));
  }
  *(undefined8 *)(param_2 + 0x40) = 0;
  std::_Lockit::~_Lockit((_Lockit *)(param_2 + 0x38));
  return;
}

