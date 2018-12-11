// auto generated by using the following code as vtn.h and run gcc
// #include <TH/TH.h>

// #define VTN_(NAME) TH_CONCAT_4(VTN_, Real, _, NAME)

// #include "generic/vtn.h"
// #include "THGenerateAllTypes.h"
// gcc -E vtn.h -I /Users/chengkaizhang/bin/anaconda3/envs/python_test/lib/python3.6/site-packages/torch/lib/include -I /Users/chengkaizhang/bin/anaconda3/envs/python_test/lib/python3.6/site-packages/torch/lib/include/TH -I . | grep VTN_


void VTN_Float_BilinearSampler3DChannelFirst_updateOutput(THFloatTensor *inputTensor, THFloatTensor *grid, THFloatTensor *output);
void VTN_Double_BilinearSampler3DChannelFirst_updateOutput(THDoubleTensor *inputTensor, THDoubleTensor *grid, THDoubleTensor *output);
// void VTN_Byte_BilinearSampler3DChannelFirst_updateOutput(THByteTensor *inputTensor, THByteTensor *grid, THByteTensor *output);
// void VTN_Char_BilinearSampler3DChannelFirst_updateOutput(THCharTensor *inputTensor, THCharTensor *grid, THCharTensor *output);
// void VTN_Short_BilinearSampler3DChannelFirst_updateOutput(THShortTensor *inputTensor, THShortTensor *grid, THShortTensor *output);
// void VTN_Int_BilinearSampler3DChannelFirst_updateOutput(THIntTensor *inputTensor, THIntTensor *grid, THIntTensor *output);
// void VTN_Long_BilinearSampler3DChannelFirst_updateOutput(THLongTensor *inputTensor, THLongTensor *grid, THLongTensor *output);

void VTN_Float_BilinearSampler3DChannelFirst_updateGradInput(THFloatTensor *inputTensor, THFloatTensor *grid, THFloatTensor *gradInputTensor,
                    THFloatTensor *gradGrid, THFloatTensor *gradOutput);

void VTN_Double_BilinearSampler3DChannelFirst_updateGradInput(THDoubleTensor *inputTensor, THDoubleTensor *grid, THDoubleTensor *gradInputTensor,
                    THDoubleTensor *gradGrid, THDoubleTensor *gradOutput);

// void VTN_Byte_BilinearSampler3DChannelFirst_updateGradInput(THByteTensor *inputTensor, THByteTensor *grid, THByteTensor *gradInputTensor,
//                     THByteTensor *gradGrid, THByteTensor *gradOutput);

// void VTN_Char_BilinearSampler3DChannelFirst_updateGradInput(THCharTensor *inputTensor, THCharTensor *grid, THCharTensor *gradInputTensor,
//                     THCharTensor *gradGrid, THCharTensor *gradOutput);

// void VTN_Short_BilinearSampler3DChannelFirst_updateGradInput(THShortTensor *inputTensor, THShortTensor *grid, THShortTensor *gradInputTensor,
//                     THShortTensor *gradGrid, THShortTensor *gradOutput);

// void VTN_Int_BilinearSampler3DChannelFirst_updateGradInput(THIntTensor *inputTensor, THIntTensor *grid, THIntTensor *gradInputTensor,
//                     THIntTensor *gradGrid, THIntTensor *gradOutput);

// void VTN_Long_BilinearSampler3DChannelFirst_updateGradInput(THLongTensor *inputTensor, THLongTensor *grid, THLongTensor *gradInputTensor,
//                     THLongTensor *gradGrid, THLongTensor *gradOutput);