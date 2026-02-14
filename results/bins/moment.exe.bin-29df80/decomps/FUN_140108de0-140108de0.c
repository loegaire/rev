
void FUN_140108de0(void)

{
  code *pcVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  byte bVar5;
  int iVar6;
  undefined4 *_ArgList;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  char *pcVar12;
  longlong lVar13;
  code *pcVar14;
  code cVar15;
  undefined8 *puVar16;
  uint uVar17;
  char cVar18;
  uint uVar19;
  undefined **ppuVar20;
  ulonglong uVar21;
  longlong lVar22;
  bool bVar23;
  uintptr_t local_68;
  undefined8 uStack_60;
  uintptr_t local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
LAB_140108e22:
  iVar6 = _Mtx_lock();
  if (iVar6 == 0) {
    if (DAT_14012b46c != 0x7fffffff) {
      for (ppuVar20 = &PTR_FUN_14012a4a0;
          (TypeDescriptor *)ppuVar20 != &std::bad_array_new_length::RTTI_Type_Descriptor;
          ppuVar20 = (undefined **)((longlong)ppuVar20 + 0x10)) {
        if ((*(char *)((longlong)&((TypeDescriptor *)ppuVar20)->spare + 4) != '\0') ||
           ((DAT_14012b5fd & 1) == 0)) {
          *(undefined1 *)((longlong)&((TypeDescriptor *)ppuVar20)->spare + 4) = 0;
          uVar2 = *(undefined4 *)&((TypeDescriptor *)ppuVar20)->spare;
          pvVar3 = ((TypeDescriptor *)ppuVar20)->pVFTable;
          _ArgList = operator_new(0x18);
          *_ArgList = uVar2;
          *(void **)(_ArgList + 2) = pvVar3;
          *(code **)(_ArgList + 4) = FUN_1401044f0;
          local_58 = _beginthreadex((void *)0x0,0,FUN_140109590,_ArgList,0,&uStack_50);
          if (local_58 == 0) {
            uStack_50 = 0;
            std::_Throw_Cpp_error(6);
LAB_14010932f:
            std::_Throw_Cpp_error(1);
          }
          else if (uStack_50 != 0) {
            uStack_60 = CONCAT44(uStack_4c,uStack_50);
            local_68 = local_58;
            iVar6 = _Thrd_detach();
            if (iVar6 == 0) goto LAB_140108e50;
            goto LAB_14010932f;
          }
          std::_Throw_Cpp_error(1);
          goto LAB_140109343;
        }
LAB_140108e50:
      }
      if ((DAT_14012b5fd & 1) == 0) {
        uVar9 = 0;
        lVar11 = readgsbase();
        puVar4 = (undefined8 *)
                 **(undefined8 **)(*(longlong *)(*(longlong *)(lVar11 + 0x60) + 0x18) + 0x10);
        uVar10 = 0xfdbae540;
        puVar16 = puVar4;
        do {
          if (uVar9 == 0) {
LAB_140108f8d:
            lVar22 = puVar16[6];
            uVar17 = *(uint *)(lVar22 + 0x88 + (longlong)*(int *)(lVar22 + 0x3c));
            lVar11 = lVar22 + (ulonglong)uVar17;
            if ((ulonglong)uVar17 != 0) {
              uVar21 = (ulonglong)*(uint *)(lVar11 + 0x18);
              do {
                bVar23 = uVar21 == 0;
                uVar21 = uVar21 - 1;
                if (bVar23) goto LAB_140108f43;
                uVar7 = (ulonglong)
                        *(uint *)((ulonglong)*(uint *)(lVar11 + 0x20) + lVar22 + uVar21 * 4);
                cVar18 = *(char *)(lVar22 + uVar7);
                if (cVar18 == '\0') {
                  uVar19 = 0xbbb77df8;
                }
                else {
                  pcVar12 = (char *)(uVar7 + lVar22 + 1);
                  uVar19 = 0xbbb77df8;
                  do {
                    uVar19 = ((int)cVar18 ^ uVar19) * 0x1000193;
                    cVar18 = *pcVar12;
                    pcVar12 = pcVar12 + 1;
                  } while (cVar18 != '\0');
                }
              } while (uVar19 != uVar10);
              uVar9 = *(uint *)((ulonglong)*(uint *)(lVar11 + 0x1c) + lVar22 +
                               (ulonglong)
                               *(ushort *)
                                ((ulonglong)*(uint *)(lVar11 + 0x24) + lVar22 +
                                (uVar21 & 0xffffffff) * 2) * 4);
              pcVar14 = (code *)(lVar22 + (ulonglong)uVar9);
              if ((uVar9 <= uVar17) ||
                 ((code *)(lVar11 + (ulonglong)
                                    *(uint *)(lVar22 + 0x8c + (longlong)*(int *)(lVar22 + 0x3c))) <=
                  pcVar14)) goto LAB_1401090c0;
              uVar10 = 0xbbb77df8;
              uVar9 = 0xbbb77df8;
              cVar15 = *pcVar14;
              while (cVar15 != (code)0x2e) {
                uVar9 = ((int)(char)cVar15 ^ uVar9) * 0x1000193;
                pcVar1 = pcVar14 + 1;
                pcVar14 = pcVar14 + 1;
                cVar15 = *pcVar1;
              }
              cVar15 = pcVar14[1];
              if (cVar15 != (code)0x0) {
                pcVar14 = pcVar14 + 2;
                uVar10 = 0xbbb77df8;
                do {
                  uVar10 = ((int)(char)cVar15 ^ uVar10) * 0x1000193;
                  cVar15 = *pcVar14;
                  pcVar14 = pcVar14 + 1;
                } while (cVar15 != (code)0x0);
              }
              puVar16 = (undefined8 *)*puVar4;
            }
          }
          else {
            uVar17 = 0xbbb77df8;
            if (1 < (ushort)(*(int *)(puVar16 + 0xb) - 8U)) {
              lVar11 = 0;
              do {
                uVar17 = ((int)*(char *)(puVar16[0xc] + lVar11) ^ uVar17) * 0x1000193;
                lVar11 = lVar11 + 2;
              } while ((ulonglong)((*(int *)(puVar16 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar11);
            }
            if (uVar17 == uVar9) goto LAB_140108f8d;
          }
LAB_140108f43:
          puVar16 = (undefined8 *)*puVar16;
        } while( true );
      }
      goto LAB_1401090e3;
    }
  }
  else {
LAB_140109343:
    std::_Throw_Cpp_error(5);
  }
  DAT_14012b46c = 0x7ffffffe;
  std::_Throw_Cpp_error(6);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
LAB_1401090c0:
  (*pcVar14)(DAT_14012b2c0);
  LOCK();
  bVar23 = DAT_14012b5fc == DAT_14012b5fd;
  bVar5 = DAT_14012b5fd;
  if (bVar23) {
    DAT_14012b5fd = 1;
    bVar5 = DAT_14012b5fc;
  }
  UNLOCK();
  if (!bVar23) {
    DAT_14012b5fc = bVar5;
  }
LAB_1401090e3:
  uVar7 = _Query_perf_frequency();
  uVar21 = _Query_perf_counter();
  if (uVar7 == 10000000) {
    lVar11 = uVar21 * 100;
  }
  else if (uVar7 == 24000000) {
    lVar11 = (((longlong)uVar21 % 24000000) * 1000000000) / 24000000 +
             ((longlong)uVar21 / 24000000) * 1000000000;
  }
  else {
    if ((uVar21 | uVar7) >> 0x20 == 0) {
      uVar8 = (uVar21 & 0xffffffff) / (uVar7 & 0xffffffff);
      uVar21 = (uVar21 & 0xffffffff) % (uVar7 & 0xffffffff);
    }
    else {
      uVar8 = (longlong)uVar21 / (longlong)uVar7;
      uVar21 = (longlong)uVar21 % (longlong)uVar7;
    }
    uVar21 = uVar21 * 1000000000;
    if ((uVar7 | uVar21) >> 0x20 == 0) {
      uVar21 = (uVar21 & 0xffffffff) / (uVar7 & 0xffffffff);
    }
    else {
      uVar21 = (longlong)uVar21 / (longlong)uVar7;
    }
    lVar11 = uVar21 + uVar8 * 1000000000;
  }
  lVar22 = lVar11 + 500000000;
  if (0x7fffffffe2329afe < lVar11) {
    lVar22 = 0x7fffffffffffffff;
  }
  while( true ) {
    uVar7 = _Query_perf_frequency();
    uVar21 = _Query_perf_counter();
    if (uVar7 == 10000000) {
      lVar11 = uVar21 * 100;
    }
    else if (uVar7 == 24000000) {
      lVar11 = (((longlong)uVar21 % 24000000) * 1000000000) / 24000000 +
               ((longlong)uVar21 / 24000000) * 1000000000;
    }
    else {
      if ((uVar21 | uVar7) >> 0x20 == 0) {
        uVar8 = (uVar21 & 0xffffffff) / (uVar7 & 0xffffffff);
        uVar21 = (uVar21 & 0xffffffff) % (uVar7 & 0xffffffff);
      }
      else {
        uVar8 = (longlong)uVar21 / (longlong)uVar7;
        uVar21 = (longlong)uVar21 % (longlong)uVar7;
      }
      uVar21 = uVar21 * 1000000000;
      if ((uVar7 | uVar21) >> 0x20 == 0) {
        uVar21 = (uVar21 & 0xffffffff) / (uVar7 & 0xffffffff);
      }
      else {
        uVar21 = (longlong)uVar21 / (longlong)uVar7;
      }
      lVar11 = uVar21 + uVar8 * 1000000000;
    }
    lVar13 = lVar22 - lVar11;
    if (lVar13 == 0 || lVar22 < lVar11) break;
    lVar11 = _Xtime_get_ticks();
    if (863999999999999 < lVar13) {
      lVar13 = 864000000000000;
    }
    lVar13 = lVar11 * 100 + lVar13;
    local_68 = lVar13 / 1000000000;
    uStack_60 = CONCAT44(uStack_60._4_4_,(int)lVar13 + (int)local_68 * -1000000000);
    _Thrd_sleep(&local_68);
  }
  _Mtx_unlock(&DAT_14012b420);
  goto LAB_140108e22;
}

