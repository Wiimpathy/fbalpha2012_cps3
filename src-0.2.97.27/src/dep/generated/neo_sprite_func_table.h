// Table with all function addresses.
static RenderBankFunction RenderBankFunctionTable[] = {
	&RenderBank16_ZOOM0_NOCLIP_TRANS, &RenderBank16_ZOOM1_NOCLIP_TRANS, &RenderBank16_ZOOM2_NOCLIP_TRANS, &RenderBank16_ZOOM3_NOCLIP_TRANS, &RenderBank16_ZOOM4_NOCLIP_TRANS, &RenderBank16_ZOOM5_NOCLIP_TRANS, &RenderBank16_ZOOM6_NOCLIP_TRANS, &RenderBank16_ZOOM7_NOCLIP_TRANS, &RenderBank16_ZOOM8_NOCLIP_TRANS, &RenderBank16_ZOOM9_NOCLIP_TRANS, &RenderBank16_ZOOM10_NOCLIP_TRANS, &RenderBank16_ZOOM11_NOCLIP_TRANS, &RenderBank16_ZOOM12_NOCLIP_TRANS, &RenderBank16_ZOOM13_NOCLIP_TRANS, &RenderBank16_ZOOM14_NOCLIP_TRANS, &RenderBank16_ZOOM15_NOCLIP_TRANS, 
	&RenderBank16_ZOOM0_CLIP_TRANS, &RenderBank16_ZOOM1_CLIP_TRANS, &RenderBank16_ZOOM2_CLIP_TRANS, &RenderBank16_ZOOM3_CLIP_TRANS, &RenderBank16_ZOOM4_CLIP_TRANS, &RenderBank16_ZOOM5_CLIP_TRANS, &RenderBank16_ZOOM6_CLIP_TRANS, &RenderBank16_ZOOM7_CLIP_TRANS, &RenderBank16_ZOOM8_CLIP_TRANS, &RenderBank16_ZOOM9_CLIP_TRANS, &RenderBank16_ZOOM10_CLIP_TRANS, &RenderBank16_ZOOM11_CLIP_TRANS, &RenderBank16_ZOOM12_CLIP_TRANS, &RenderBank16_ZOOM13_CLIP_TRANS, &RenderBank16_ZOOM14_CLIP_TRANS, &RenderBank16_ZOOM15_CLIP_TRANS, 
};

static RenderBankFunction* RenderBankNormal[3] = {
	&RenderBankFunctionTable[0],
	&RenderBankFunctionTable[32],
	&RenderBankFunctionTable[64]
};
