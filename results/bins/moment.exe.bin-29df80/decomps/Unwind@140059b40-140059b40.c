
void Unwind_140059b40(undefined8 param_1,longlong param_2)

{
  void *_Memory;
  
  _Memory = *(void **)(param_2 + 0x11d8);
  _Mtx_destroy_in_situ(_Memory);
  free(_Memory);
  return;
}

