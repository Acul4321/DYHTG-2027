#include "pch-cpp.hpp"





struct VirtualActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker;
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*,T1,T2,T3,T4,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,p3,p4,invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81;
struct Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2;
struct Action_1_t84D0CA347FC997E1202ECA3ED828B057841444EF;
struct Action_1_tC8822DDEF41267DA3844DAD787ACE63C0C385E89;
struct Action_2_tF46B14C98A24F40F2279A1D4296BB9078938C034;
struct Action_2_t115BA48255E00E3E7D79535060D729C4822CAFF3;
struct Action_2_t302322518DED0A32BC10F069AAEE117BC9C20917;
struct Action_2_t09DA61027B1820298B3AEBAB627FBF4C0CCC66B4;
struct Action_3_tCDDEBF125C30A90B3A5061DE417B889F78E7DB83;
struct Action_3_tAD728960C80D3C14B956508C335D759770FE2F6E;
struct Action_3_t57DE42DCD9F152289CA8303B0B1AB7246E7FE864;
struct Action_3_tE77469DC1E6595CCDCD9A1404CBA045A1C0AA560;
struct Dictionary_2_t6B4B40DA71BA0031F5736DF4459253299D8AF5F2;
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC;
struct Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574;
struct Dictionary_2_t765BF9715D7FF2AB2C9E5F01142AD0BFDC359E52;
struct Dictionary_2_t09274CBE3EED962B84F3CEEEF6C788C36A4A3618;
struct Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F;
struct Field_1_tA072783C26CACD3E84F9B62900C79E98AA01B8ED;
struct Field_1_tC3CCA8F7619A0B639B6671BD922EC68E34595E18;
struct Field_1_t13BBC583A7E521A9A0C5B9A2B8B537D8CEE550BD;
struct Field_1_tEE1A923EA8160028BC34CE74DF77A8FB37FCA5D3;
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
struct Func_1_t9EB8CE9DFD9B703BC79F2087B16EA394B7A9F9A1;
struct Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC;
struct Func_1_t704C051013549CDD77A31AEC405EA270221633B3;
struct Func_1_t87EB6A475C10479F9DA4442B05AC1022C1B7419C;
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2;
struct Func_3_t77F22AB9767953FDC31A6CFFF00E1541826CCDD3;
struct IEqualityComparer_1_tF175EE4608832085A0EE2A97DAE545B83F097888;
struct KeyCollection_tFAD4F134C4BF43E0B9C815CAF6400BC70707FFE6;
struct KeyCollection_t73C0C79A1AE364904271EDF868E84A40E1036C14;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_tB1D3AE6638063900DFF2ED463335EF8912FBBF7B;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_t365205E6BE687FCF41975C16741DD9C303C1C269;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2;
struct ObjectPool_1_t330A51752287ED087418126C388D21E9DBEF95C9;
struct ObjectPool_1_t832B418F0EE633B08A82DA8C95EA659D7217D0E1;
struct ObjectPool_1_t511FA97760840C42094CECA7AA3E0B58EB51A231;
struct ObjectPool_1_t539DE50F180F8B36A9A6DAFF61E3AE3612386F80;
struct ObjectPool_1_tF8034E1C380845CDC664082F044A15EFFA310FD5;
struct Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910;
struct Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF;
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41;
struct Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68;
struct Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C;
struct TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B;
struct TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB;
struct ValueCollection_t65B544B071475F1D6AA36F54F506E013AC0D137E;
struct ValueCollection_t6A97FB8D601D8DB0AEB18A1FA9C9B42007CB71FC;
struct Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9;
struct Values_1_tD44BBEC769B1388DCA51C01019802B242F987014;
struct VectorField_1_tA0DD3460E58AEABD9D5B33110FC64F4490179B87;
struct VectorField_1_t922D9F74763B4AFD1C1760DE2236972042F8310D;
struct VectorField_1_t7640EEE30580F0D8ABCA05DBBAB2F6B83A4713C3;
struct VectorField_1_tA0B76D2246CE6687E43856049B2DB46975532D1F;
struct EmptyDataU5BU5D_t0E25AE9FA138C8F33CFB693BB073D05D57316E9A;
struct EmptyDataU5BU5D_t4F13631B1440411479135A222DA84C0A8FC754FD;
struct EntryU5BU5D_t7D88CA28550BAA1CE7717583FAD579BDAFF0EE9D;
struct EntryU5BU5D_t4BFD09382678A7D9BBA8198240AA8E87B652B0F5;
struct StyleDataU5BU5D_tFFFE872CF2A20E675AE8CE5CA228C2D6B3272CF2;
struct StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A;
struct TimingDataU5BU5D_t4B3E0005A73C94EB00881FDF1758D709D04F4F79;
struct TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct EventBaseU5BU5D_t1EB0F8CCFFAF0F2BD202BB74153A8BFEFEC8DC45;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
struct IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55;
struct PointerDispatchState_t145BB8BB02690F87487325596E690295E39A383A;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StringBuilder_t;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69;
struct TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD;
struct TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF;
struct TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualElementSelectorData_t4C4043092A19A653CE8637C7659E36E0D3CC23A0;
struct VisualElementTransformData_t3DD575B5990B68FF956673EFF036171C86A38DF3;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct IContainer_tBD9F21C42D4253E306C4EF7CFC72480E0C7C89B5;
struct Panel_t3A0D2006E8AEA607A6DF5188138E463A26085295;
struct TypeData_t9C5DC5F5DD8F0C04131F359229ED4738117BA396;
struct Record_tD4D528E1BFF948E92C590DCE7A010BA356D50049;
struct Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24;
struct EqualityComparer_tF8FCE99C5DBB2F35D74728CB65346435381CFD5B;
struct Data_t6BD087CC0FA9794D342D260035A70E365224C66E;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869;
IL2CPP_EXTERN_C String_t* _stringLiteral491788442E76F5D7830F0DBFCF8EDD98854F636F;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4D0C3095996E7B1D88B163C7DA308689CCA71337_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mC0C477097247ABAE611BD10D005CBADBED88FCAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionEventBase_1_GetPooled_m57317A5C89342419B0A31E8FBB622786C7C283CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionEventBase_1_GetPooled_m5A4FB9CF00193D3079D46E507D66AB77C1F4A66A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionEventBase_1_GetPooled_mFD665DFD6C012691EA5BE90A0AF28D3BE715ED61_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct StyleDataU5BU5D_tFFFE872CF2A20E675AE8CE5CA228C2D6B3272CF2;
struct StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A;
struct TimingDataU5BU5D_t4B3E0005A73C94EB00881FDF1758D709D04F4F79;
struct TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034;
struct StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359;
struct VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t7D88CA28550BAA1CE7717583FAD579BDAFF0EE9D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tFAD4F134C4BF43E0B9C815CAF6400BC70707FFE6* ____keys;
	ValueCollection_t65B544B071475F1D6AA36F54F506E013AC0D137E* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t4BFD09382678A7D9BBA8198240AA8E87B652B0F5* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t73C0C79A1AE364904271EDF868E84A40E1036C14* ____keys;
	ValueCollection_t6A97FB8D601D8DB0AEB18A1FA9C9B42007CB71FC* ____values;
	RuntimeObject* ____syncRoot;
};
struct List_1_t365205E6BE687FCF41975C16741DD9C303C1C269  : public RuntimeObject
{
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910  : public RuntimeObject
{
	EventBaseU5BU5D_t1EB0F8CCFFAF0F2BD202BB74153A8BFEFEC8DC45* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B  : public RuntimeObject
{
	Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* ___elementPropertyStateDelta;
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ___elementPropertyQueuedEvents;
	RuntimeObject* ___panel;
	int32_t ___m_ChangesCount;
};
struct TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB  : public RuntimeObject
{
	Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* ___elementPropertyStateDelta;
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ___elementPropertyQueuedEvents;
	RuntimeObject* ___panel;
	int32_t ___m_ChangesCount;
};
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	bool ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	bool ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	String_t* ___m_name;
	String_t* ___englishname;
	String_t* ___nativename;
	String_t* ___iso3lang;
	String_t* ___iso2lang;
	String_t* ___win3lang;
	String_t* ___territory;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture;
	bool ___constructed;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData;
	bool ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	char* ___m_name;
	char* ___englishname;
	char* ___nativename;
	char* ___iso3lang;
	char* ___iso2lang;
	char* ___win3lang;
	char* ___territory;
	char** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	Il2CppChar* ___m_name;
	Il2CppChar* ___englishname;
	Il2CppChar* ___nativename;
	Il2CppChar* ___iso3lang;
	Il2CppChar* ___iso2lang;
	Il2CppChar* ___win3lang;
	Il2CppChar* ___territory;
	Il2CppChar** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398  : public RuntimeObject
{
	ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31* ___m_ClickDetector;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___m_Queue;
	PointerDispatchState_t145BB8BB02690F87487325596E690295E39A383A* ___U3CpointerStateU3Ek__BackingField;
	uint32_t ___m_GateCount;
	uint32_t ___m_GateDepth;
	int32_t ___m_DispatchStackFrame;
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_CurrentEvent;
	Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* ___m_DispatchContexts;
	bool ___m_Immediate;
	bool ___U3CprocessingEventsU3Ek__BackingField;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes;
	String_t* ___positiveSign;
	String_t* ___negativeSign;
	String_t* ___numberDecimalSeparator;
	String_t* ___numberGroupSeparator;
	String_t* ___currencyGroupSeparator;
	String_t* ___currencyDecimalSeparator;
	String_t* ___currencySymbol;
	String_t* ___ansiCurrencySymbol;
	String_t* ___nanSymbol;
	String_t* ___positiveInfinitySymbol;
	String_t* ___negativeInfinitySymbol;
	String_t* ___percentDecimalSeparator;
	String_t* ___percentGroupSeparator;
	String_t* ___percentSymbol;
	String_t* ___perMilleSymbol;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits;
	int32_t ___m_dataItem;
	int32_t ___numberDecimalDigits;
	int32_t ___currencyDecimalDigits;
	int32_t ___currencyPositivePattern;
	int32_t ___currencyNegativePattern;
	int32_t ___numberNegativePattern;
	int32_t ___percentPositivePattern;
	int32_t ___percentNegativePattern;
	int32_t ___percentDecimalDigits;
	int32_t ___digitSubstitution;
	bool ___isReadOnly;
	bool ___m_useUserOverride;
	bool ___m_isInvariant;
	bool ___validForParseAsNumber;
	bool ___validForParseAsCurrency;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24  : public RuntimeObject
{
};
struct AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23 
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___elements;
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___properties;
	EmptyDataU5BU5D_t0E25AE9FA138C8F33CFB693BB073D05D57316E9A* ___timing;
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___style;
	int32_t ___count;
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___indices;
};
struct AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915 
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___elements;
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___properties;
	EmptyDataU5BU5D_t4F13631B1440411479135A222DA84C0A8FC754FD* ___timing;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___style;
	int32_t ___count;
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___indices;
};
struct AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2 
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___elements;
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___properties;
	TimingDataU5BU5D_t4B3E0005A73C94EB00881FDF1758D709D04F4F79* ___timing;
	StyleDataU5BU5D_tFFFE872CF2A20E675AE8CE5CA228C2D6B3272CF2* ___style;
	int32_t ___count;
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___indices;
};
struct AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450 
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___elements;
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___properties;
	TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* ___timing;
	StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A* ___style;
	int32_t ___count;
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___indices;
};
struct AnimationDataSet_2_tB3CD70B53A9F99B641FC0AB1B51CD76F16897243 
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___elements;
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___properties;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___timing;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___style;
	int32_t ___count;
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___indices;
};
struct EmptyData_t399475F01E0BC0B85E2FE88B9144B6DBDB94CFA5 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_t526DD646BCFBCA8323FA31D30623117D128D1E4B 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC 
{
	Il2CppSharedGenericObject* ___startValue;
	Il2CppSharedGenericObject* ___endValue;
	Il2CppSharedGenericObject* ___reversingAdjustedStartValue;
	Il2CppSharedGenericObject* ___currentValue;
};
typedef Il2CppFullySharedGenericStruct StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D;
struct TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70 
{
	double ___startTime;
	float ___duration;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___easingCurve;
	float ___easedProgress;
	float ___reversingShorteningFactor;
	bool ___isStarted;
	float ___delay;
};
struct TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C 
{
	double ___startTime;
	float ___duration;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___easingCurve;
	float ___easedProgress;
	float ___reversingShorteningFactor;
	bool ___isStarted;
	float ___delay;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097 
{
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* ___m_Dispatcher;
};
struct EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshaled_pinvoke
{
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* ___m_Dispatcher;
};
struct EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshaled_com
{
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* ___m_Dispatcher;
};
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	bool ___m_Focusable;
	int32_t ___m_TabIndex;
	bool ___m_DelegatesFocus;
	bool ___m_ExcludeFromFocusRing;
	bool ___U3CisEligibleToReceiveFocusFromDisabledChildU3Ek__BackingField;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	int32_t ___id;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___byte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_OffsetPadding[1];
			uint8_t ___byte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_OffsetPadding[2];
			uint8_t ___byte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_OffsetPadding[3];
			uint8_t ___byte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_OffsetPadding[4];
			uint8_t ___byte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_OffsetPadding[5];
			uint8_t ___byte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_OffsetPadding[6];
			uint8_t ___byte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_OffsetPadding[7];
			uint8_t ___byte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_OffsetPadding[8];
			uint8_t ___byte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_OffsetPadding[9];
			uint8_t ___byte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_OffsetPadding[10];
			uint8_t ___byte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_OffsetPadding[11];
			uint8_t ___byte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_OffsetPadding[12];
			uint8_t ___byte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_OffsetPadding[13];
			uint8_t ___byte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_OffsetPadding[14];
			uint8_t ___byte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_OffsetPadding[15];
			uint8_t ___byte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___sbyte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_OffsetPadding[1];
			int8_t ___sbyte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_OffsetPadding[2];
			int8_t ___sbyte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_OffsetPadding[3];
			int8_t ___sbyte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_OffsetPadding[4];
			int8_t ___sbyte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_OffsetPadding[5];
			int8_t ___sbyte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_OffsetPadding[6];
			int8_t ___sbyte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_OffsetPadding[7];
			int8_t ___sbyte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_OffsetPadding[8];
			int8_t ___sbyte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_OffsetPadding[9];
			int8_t ___sbyte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_OffsetPadding[10];
			int8_t ___sbyte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_OffsetPadding[11];
			int8_t ___sbyte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_OffsetPadding[12];
			int8_t ___sbyte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_OffsetPadding[13];
			int8_t ___sbyte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_OffsetPadding[14];
			int8_t ___sbyte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_OffsetPadding[15];
			int8_t ___sbyte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___uint16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_OffsetPadding[2];
			uint16_t ___uint16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_OffsetPadding[4];
			uint16_t ___uint16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_OffsetPadding[6];
			uint16_t ___uint16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_OffsetPadding[8];
			uint16_t ___uint16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_OffsetPadding[10];
			uint16_t ___uint16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_OffsetPadding[12];
			uint16_t ___uint16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_OffsetPadding[14];
			uint16_t ___uint16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___int16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_OffsetPadding[2];
			int16_t ___int16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_OffsetPadding[4];
			int16_t ___int16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_OffsetPadding[6];
			int16_t ___int16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_OffsetPadding[8];
			int16_t ___int16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_OffsetPadding[10];
			int16_t ___int16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_OffsetPadding[12];
			int16_t ___int16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_OffsetPadding[14];
			int16_t ___int16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___uint32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_OffsetPadding[4];
			uint32_t ___uint32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_OffsetPadding[8];
			uint32_t ___uint32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_OffsetPadding[12];
			uint32_t ___uint32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___int32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_OffsetPadding[4];
			int32_t ___int32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_OffsetPadding[8];
			int32_t ___int32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_OffsetPadding[12];
			int32_t ___int32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___uint64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_OffsetPadding[8];
			uint64_t ___uint64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___int64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_OffsetPadding[8];
			int64_t ___int64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___single_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_OffsetPadding[4];
			float ___single_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_OffsetPadding[8];
			float ___single_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_OffsetPadding[12];
			float ___single_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___double_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_OffsetPadding[8];
			double ___double_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_forAlignmentOnly;
		};
	};
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct StyleClassList_tCA2E8910D5BCCB7029CF852421F1E07E8EDF9744 
{
	Record_tD4D528E1BFF948E92C590DCE7A010BA356D50049* ___m_Record;
};
struct StyleClassList_tCA2E8910D5BCCB7029CF852421F1E07E8EDF9744_marshaled_pinvoke
{
	Record_tD4D528E1BFF948E92C590DCE7A010BA356D50049* ___m_Record;
};
struct StyleClassList_tCA2E8910D5BCCB7029CF852421F1E07E8EDF9744_marshaled_com
{
	Record_tD4D528E1BFF948E92C590DCE7A010BA356D50049* ___m_Record;
};
struct StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312 
{
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___propertiesList;
};
struct StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshaled_pinvoke
{
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___propertiesList;
};
struct StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshaled_com
{
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___propertiesList;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF 
{
	int32_t ___m_Id;
};
struct UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;
struct Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9  : public Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24
{
	double ___m_CurrentTime;
	TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* ___m_CurrentFrameEventsState;
	TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* ___m_NextFrameEventsState;
	AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2 ___running;
	AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23 ___completed;
};
struct Values_1_tD44BBEC769B1388DCA51C01019802B242F987014  : public Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24
{
	double ___m_CurrentTime;
	TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* ___m_CurrentFrameEventsState;
	TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* ___m_NextFrameEventsState;
	AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450 ___running;
	AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915 ___completed;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct EventCategory_tCFC347F164A2525B4C39DA6A9B7A9B5A541E3FFA 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct LanguageDirection_t30A3B6BBCEE6A6F57641E4E008E0DCC40603558C 
{
	int32_t ___value__;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct PropagationPhase_tF3BE8BF5ED45FC52A828B7B6F078B64F01FAE6D6 
{
	int32_t ___value__;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct RenderHints_t4032FC4AB3FD946FD2A484865B8861730D9035E7 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct VisualElementFlags_t4D1066E11400967A1A2DA7331391ACDC4AA14409 
{
	int32_t ___value__;
};
struct Flags_tBBD3C554E9057BB9AC0476F92D0328575F2C4193 
{
	int32_t ___value__;
};
struct EventPropagation_t024AF56F7A787C03AA21B065B624553EF52E7B83 
{
	int32_t ___value__;
};
struct LifeCycleStatus_tEE500629F5431B574B8047EB70864747D348D38C 
{
	int32_t ___value__;
};
struct TransitionState_tA8D086878A2990914A87DC06EBFB2C25F1C65348 
{
	int32_t ___value__;
};
struct VectorSizeHelper_tC26CEAD1B0D88F765A24D653A74900C4C7FEBD18 
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ____placeholder;
	uint8_t ____byte;
};
struct VectorSizeHelper_tF54ACCE947CB8A38047BEB642392A4E7345A157D 
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ____placeholder;
	uint8_t ____byte;
};
struct VectorSizeHelper_tAB183E4966E0B97A19A75D213EDAE51037A6BF3C 
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ____placeholder;
	uint8_t ____byte;
};
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C  : public RuntimeObject
{
	int32_t ___U3CeventCategoriesU3Ek__BackingField;
	int64_t ___U3CtimestampU3Ek__BackingField;
	uint64_t ___U3CeventIdU3Ek__BackingField;
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField;
	int32_t ___U3CpropagationU3Ek__BackingField;
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CelementTargetU3Ek__BackingField;
	int32_t ___U3CpropagationPhaseU3Ek__BackingField;
	RuntimeObject* ___m_CurrentTarget;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ImguiEvent;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CoriginalMousePositionU3Ek__BackingField;
};
struct MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 
{
	union
	{
		struct
		{
			intptr_t ___pointer;
			int32_t ___allocator;
		};
		uint8_t MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2__padding[16];
	};
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF 
{
	int32_t ___U3CidU3Ek__BackingField;
	String_t* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField;
	char* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField;
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF  : public RuntimeObject
{
	int32_t ___U3CorderU3Ek__BackingField;
	Panel_t3A0D2006E8AEA607A6DF5188138E463A26085295* ___m_Panel;
	RuntimeObject* ___m_Parent;
	int32_t ___U3CflagsU3Ek__BackingField;
	String_t* ___U3CdisplayNameU3Ek__BackingField;
	String_t* ___U3CtooltipU3Ek__BackingField;
	String_t* ___U3CqueryPathU3Ek__BackingField;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___isHiddenCallback;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___property;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___property;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___property;
};
struct EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct EventBase_1_t19FCA0E562C449FA0A2FA0053E97568D4B389A56  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct EventBase_1_t4F23137036FDF513830C85C5F8B2BF3A0E146A0F  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct EventBase_1_t90E610023DACA9D4D888599D2E1B536299CE9098  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct Field_1_tA072783C26CACD3E84F9B62900C79E98AA01B8ED  : public Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF
{
	Func_1_t9EB8CE9DFD9B703BC79F2087B16EA394B7A9F9A1* ___U3CgetterU3Ek__BackingField;
	Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* ___U3CsetterU3Ek__BackingField;
	Action_2_tF46B14C98A24F40F2279A1D4296BB9078938C034* ___onValueChanged;
};
struct Field_1_tC3CCA8F7619A0B639B6671BD922EC68E34595E18  : public Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF
{
	Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* ___U3CgetterU3Ek__BackingField;
	Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* ___U3CsetterU3Ek__BackingField;
	Action_2_t115BA48255E00E3E7D79535060D729C4822CAFF3* ___onValueChanged;
};
struct Field_1_t13BBC583A7E521A9A0C5B9A2B8B537D8CEE550BD  : public Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF
{
	Func_1_t704C051013549CDD77A31AEC405EA270221633B3* ___U3CgetterU3Ek__BackingField;
	Action_1_t84D0CA347FC997E1202ECA3ED828B057841444EF* ___U3CsetterU3Ek__BackingField;
	Action_2_t302322518DED0A32BC10F069AAEE117BC9C20917* ___onValueChanged;
};
struct Field_1_tEBDBEF6C7E8EC7F1DBE1ABC4B1EA917269E20258  : public Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF
{
	Func_1_t87EB6A475C10479F9DA4442B05AC1022C1B7419C* ___U3CgetterU3Ek__BackingField;
	Action_1_tC8822DDEF41267DA3844DAD787ACE63C0C385E89* ___U3CsetterU3Ek__BackingField;
	Action_2_t09DA61027B1820298B3AEBAB627FBF4C0CCC66B4* ___onValueChanged;
};
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2  : public MulticastDelegate_t
{
};
struct Func_3_t77F22AB9767953FDC31A6CFFF00E1541826CCDD3  : public MulticastDelegate_t
{
};
struct Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A  : public MulticastDelegate_t
{
};
struct KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D 
{
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___key;
	Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* ___value;
};
struct KeyValuePair_2_tE4AF7E149217032C1AFD6D018342D58C2BB94D77 
{
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___key;
	Il2CppSharedGenericObject* ___value;
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 
{
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
	Data_t6BD087CC0FA9794D342D260035A70E365224C66E* ___m_Data;
};
struct Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A 
{
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t58168766D1E54BD4791D0209E876F0E24ACFDF18 
{
	Dictionary_2_t765BF9715D7FF2AB2C9E5F01142AD0BFDC359E52* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tE4AF7E149217032C1AFD6D018342D58C2BB94D77 ____current;
	int32_t ____getEnumeratorRetType;
};
struct TransitionEventBase_1_t0AAD21652882D2FCF19FCF0C4347DC161E413130  : public EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1
{
	StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312 ___U3CstylePropertyNamesU3Ek__BackingField;
	double ___U3CelapsedTimeU3Ek__BackingField;
};
struct TransitionEventBase_1_tE4425184474B0AA7732182D0294F0960A51DEAC4  : public EventBase_1_t19FCA0E562C449FA0A2FA0053E97568D4B389A56
{
	StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312 ___U3CstylePropertyNamesU3Ek__BackingField;
	double ___U3CelapsedTimeU3Ek__BackingField;
};
struct TransitionEventBase_1_t297898456ECA9E8B0FE5C4821C0FD1C2CEFA86AC  : public EventBase_1_t4F23137036FDF513830C85C5F8B2BF3A0E146A0F
{
	StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312 ___U3CstylePropertyNamesU3Ek__BackingField;
	double ___U3CelapsedTimeU3Ek__BackingField;
};
struct TransitionEventBase_1_t1FB26EAAAF9B2F0657560F33B4BB75695CAF7579  : public EventBase_1_t90E610023DACA9D4D888599D2E1B536299CE9098
{
	StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312 ___U3CstylePropertyNamesU3Ek__BackingField;
	double ___U3CelapsedTimeU3Ek__BackingField;
};
struct VectorField_1_tA0DD3460E58AEABD9D5B33110FC64F4490179B87  : public Field_1_tA072783C26CACD3E84F9B62900C79E98AA01B8ED
{
	float ___incStep;
	float ___incStepMult;
	int32_t ___decimals;
};
struct VectorField_1_t922D9F74763B4AFD1C1760DE2236972042F8310D  : public Field_1_tC3CCA8F7619A0B639B6671BD922EC68E34595E18
{
	float ___incStep;
	float ___incStepMult;
	int32_t ___decimals;
};
struct VectorField_1_t7640EEE30580F0D8ABCA05DBBAB2F6B83A4713C3  : public Field_1_t13BBC583A7E521A9A0C5B9A2B8B537D8CEE550BD
{
	float ___incStep;
	float ___incStepMult;
	int32_t ___decimals;
};
struct VectorField_1_tA0B76D2246CE6687E43856049B2DB46975532D1F  : public Field_1_tEBDBEF6C7E8EC7F1DBE1ABC4B1EA917269E20258
{
	float ___incStep;
	float ___incStepMult;
	int32_t ___decimals;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E 
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_PropertyPath;
	String_t* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke ___m_PropertyPath;
	char* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com ___m_PropertyPath;
	Il2CppChar* ___m_Path;
};
struct LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA 
{
	int32_t ___m_Manager;
	UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 ___m_Nodes;
	UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 ___m_Configs;
};
struct LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 ___m_Handle;
};
struct TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69  : public TransitionEventBase_1_t0AAD21652882D2FCF19FCF0C4347DC161E413130
{
};
struct TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD  : public TransitionEventBase_1_tE4425184474B0AA7732182D0294F0960A51DEAC4
{
};
struct TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF  : public TransitionEventBase_1_t297898456ECA9E8B0FE5C4821C0FD1C2CEFA86AC
{
};
struct TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF  : public TransitionEventBase_1_t1FB26EAAAF9B2F0657560F33B4BB75695CAF7579
{
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField;
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField;
	String_t* ___m_Name;
	StyleClassList_tCA2E8910D5BCCB7029CF852421F1E07E8EDF9744 ___m_ClassList;
	Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35* ___m_PropertyBag;
	int32_t ___m_Flags;
	int32_t ___m_RenderHints;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding;
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___nestedRenderData;
	int32_t ___insertionIndex;
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField;
	String_t* ___m_ViewDataKey;
	int32_t ___m_LanguageDirection;
	LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE ___m_LayoutNode;
	VisualElementTransformData_t3DD575B5990B68FF956673EFF036171C86A38DF3* ___m_TransformDataPTr;
	VisualElementSelectorData_t4C4043092A19A653CE8637C7659E36E0D3CC23A0* ___m_SelectorDataPtr;
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext;
	int32_t ___inheritedStylesHash;
	uint32_t ___controlid;
	int32_t ___imguiContainerDescendantCount;
	int32_t ___m_LocalLanguageDirection;
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField;
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations;
	RuntimeObject* ___m_DataSource;
	PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55* ___m_DataSourcePath;
	int32_t ___m_TrickleDownHandleEventCategories;
	int32_t ___m_BubbleUpHandleEventCategories;
	int32_t ___m_BubbleUpEventCallbackCategories;
	int32_t ___m_TrickleDownEventCallbackCategories;
	int32_t ___m_EventInterestSelfCategories;
	int32_t ___m_CachedEventInterestParentCategories;
	uint32_t ___m_NextParentCachedVersion;
	uint32_t ___m_NextParentRequiredVersion;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CachedNextParentWithEventInterests;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource;
	List_1_tB1D3AE6638063900DFF2ED463335EF8912FBBF7B* ___m_MeshModifiers;
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess;
	ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45* ___resolvedStyleAccess;
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList;
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData;
};
struct List_1_t365205E6BE687FCF41975C16741DD9C303C1C269_StaticFields
{
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___s_emptyArray;
};
struct TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B_StaticFields
{
	ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* ___k_EventQueuePool;
};
struct TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB_StaticFields
{
	ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* ___k_EventQueuePool;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info;
	RuntimeObject* ___shared_table_lock;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture;
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number;
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX;
	bool ___IsTaiwanSku;
};
struct EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398_StaticFields
{
	ObjectPool_1_t330A51752287ED087418126C388D21E9DBEF95C9* ___k_EventQueuePool;
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct EmptyData_t399475F01E0BC0B85E2FE88B9144B6DBDB94CFA5_StaticFields
{
	EmptyData_t399475F01E0BC0B85E2FE88B9144B6DBDB94CFA5 ___Default;
};
struct EmptyData_t526DD646BCFBCA8323FA31D30623117D128D1E4B_StaticFields
{
	EmptyData_t526DD646BCFBCA8323FA31D30623117D128D1E4B ___Default;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields
{
	int32_t ___s_count;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_zero;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_one;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_allOnes;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	int32_t ___s_count;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields
{
	int32_t ___s_count;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_zero;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_one;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_allOnes;
};
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_StaticFields
{
	int64_t ___s_LastTypeId;
	uint64_t ___s_NextEventId;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticFields
{
	RuntimeObject* ___Comparer;
};
struct EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_StaticFields
{
	int64_t ___s_TypeId;
	ObjectPool_1_t832B418F0EE633B08A82DA8C95EA659D7217D0E1* ___s_Pool;
	int32_t ___EventCategory;
	TypeData_t9C5DC5F5DD8F0C04131F359229ED4738117BA396* ___k_TypeData;
};
struct Field_1_tA072783C26CACD3E84F9B62900C79E98AA01B8ED_StaticFields
{
	Action_3_tCDDEBF125C30A90B3A5061DE417B889F78E7DB83* ___onWidgetValueChangedAnalytic;
};
struct Field_1_tC3CCA8F7619A0B639B6671BD922EC68E34595E18_StaticFields
{
	Action_3_tAD728960C80D3C14B956508C335D759770FE2F6E* ___onWidgetValueChangedAnalytic;
};
struct Field_1_t13BBC583A7E521A9A0C5B9A2B8B537D8CEE550BD_StaticFields
{
	Action_3_t57DE42DCD9F152289CA8303B0B1AB7246E7FE864* ___onWidgetValueChangedAnalytic;
};
struct Field_1_tEBDBEF6C7E8EC7F1DBE1ABC4B1EA917269E20258_StaticFields
{
	Action_3_tE77469DC1E6595CCDCD9A1404CBA045A1C0AA560* ___onWidgetValueChangedAnalytic;
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	uint32_t ___s_NextId;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey;
	String_t* ___disabledUssClassName;
	UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___disabledUssClassNameUnique;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey;
	int32_t ___s_FinalizerCount;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___childCountProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___contentRectProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___dataSourcePathProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___dataSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___disablePlayModeTintProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enabledInHierarchyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enabledSelfProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___layoutProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___languageDirectionProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___localBoundProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___nameProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___panelProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___pickingModeProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___styleSheetsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___tooltipProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___usageHintsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___userDataProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___viewDataKeyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___visibleProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___visualTreeAssetSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___worldBoundProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___worldTransformProperty;
	uint32_t ___s_NextParentVersion;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList;
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath;
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct TimingDataU5BU5D_t4B3E0005A73C94EB00881FDF1758D709D04F4F79  : public RuntimeArray
{
	ALIGN_FIELD (8) TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70 m_Items[1];

	inline TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___easingCurve), (void*)NULL);
	}
	inline TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___easingCurve), (void*)NULL);
	}
};
struct VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF  : public RuntimeArray
{
	ALIGN_FIELD (8) VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* m_Items[1];

	inline VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct StyleDataU5BU5D_tFFFE872CF2A20E675AE8CE5CA228C2D6B3272CF2  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC m_Items[1];

	inline StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___startValue), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___endValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___reversingAdjustedStartValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___currentValue), (void*)NULL);
		#endif
	}
	inline StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___startValue), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___endValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___reversingAdjustedStartValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___currentValue), (void*)NULL);
		#endif
	}
};
struct TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034  : public RuntimeArray
{
	ALIGN_FIELD (8) TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C m_Items[1];

	inline TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___easingCurve), (void*)NULL);
	}
	inline TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___easingCurve), (void*)NULL);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState__ctor_m942A14500CF3DA6B1184691E8B8661CBF20F5195_fshared (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2 AnimationDataSet_2_Create_m89AC68EF43EB4B52EC3488DA28587413170C3295_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23 AnimationDataSet_2_Create_m66D8C30227A8AA433238922CADEA79F39D440173_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB4B65CDC9D463FAC9E89E96BADEFB57B3AE6E3F9_gshared (Dictionary_2_t765BF9715D7FF2AB2C9E5F01142AD0BFDC359E52* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* TransitionEventsFrameState_GetPooledQueue_m937C2DD3CE11410A8BD57AD9F9F0EF9A6575EBD6_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m0EA7626121360C44DE60550B464FE246F23ED0BC_gshared (Dictionary_2_t765BF9715D7FF2AB2C9E5F01142AD0BFDC359E52* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m16F75E528EE6527E8B9E76AE7D7E455D5476C606_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_RegisterChange_mEABB5D4C10E575520EAA056A082AFCDD5341D837_fshared (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Queue_1_Dequeue_m1ECED0A4B619428F2561AA3D053E73A097A10193_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_UnregisterChange_m41DBE132FF16D7B667B0495BDC2689AEFCCBB2B3_fshared (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_fshared_inline (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m9A76CAD9BFF257065C6D43A214FD868C0D1F3EBA_gshared (Dictionary_2_t09274CBE3EED962B84F3CEEEF6C788C36A4A3618* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC30A7B919AFA130E2A37D563DA310A3B0F56E446_gshared (Dictionary_2_t09274CBE3EED962B84F3CEEEF6C788C36A4A3618* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m48B4E23D08F6E9AB6D3EA0872E88FE2F39AA24BF_gshared (Dictionary_2_t09274CBE3EED962B84F3CEEEF6C788C36A4A3618* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* TransitionEventBase_1_GetPooled_mF3C4D7710B89EFFE816AF991CAB43B40F8013091_gshared (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___0_stylePropertyName, double ___1_elapsedTime, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueEvent_m64B86A1C2212A8788CA3F633ED58B1D5D6ABF325_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___1_epp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ClearEventQueue_mB4BF7EC8A8414D812D66705E3B46A02CAA8E2F04_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_epp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_SendTransitionCancelEvent_m358CB250222E4E6C199C8A265246024812EF8469_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, double ___2_panelElapsed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ForceComputedStyleEndValue_mE1D23011959E4D84B2E371692FF38DC0789962E8_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, int32_t ___0_runningIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_RemoveAll_m8F6D49F18326DD002D7085CFD37E996836D47827_gshared (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_RemoveAll_m37308DF9D331F7D9483F49E9221B50FF02999395_gshared (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_RemoveAll_m4A717E7EAF3AFA6020EA761371A55A95FB911B87_gshared (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_RemoveAll_mD0243DBFC2A00AF96889112ACF6B0A5BBAE3D680_gshared (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationDataSet_2_IndexOf_m39B27A0CD7E79387931C2E717D46F83956674874_fshared (AnimationDataSet_2_tB3CD70B53A9F99B641FC0AB1B51CD76F16897243* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_prop, int32_t* ___2_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionCancelEvent_mC76207505D12EC59FE24D569E0C4977671A702A1_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, double ___2_panelElapsed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_Remove_m0CC33F6F7FBB55034896C5826F7FBC9247D8DFEE_gshared (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* __this, int32_t ___0_cancelledIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_Remove_mBD0D5CCF6AE3BC40F63E502AE2530BAFE0101530_gshared (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* __this, int32_t ___0_cancelledIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_GetActivePropertiesForElement_mA378BCE8A10910B60FD3417B89FA48871613C86D_fshared (AnimationDataSet_2_tB3CD70B53A9F99B641FC0AB1B51CD76F16897243* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* ___1_outProperties, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_mF53D8E0776F9AABF2CE8F1DD56CEF19FDB4C1599_gshared_inline (Func_3_t77F22AB9767953FDC31A6CFFF00E1541826CCDD3* __this, Il2CppSharedGenericObject* ___0_arg1, Il2CppSharedGenericObject* ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Values_1_ComputeReversingShorteningFactor_m3DDD463A0FCDE2463723B6ACCFD6E62F314B257E_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, int32_t ___0_oldIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Values_1_ComputeReversingDelay_mF3433FDACD867828A82413E8C14164F64090E5A6_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, float ___0_delay, float ___1_newReversingShorteningFactor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Values_1_ComputeReversingDuration_m5A95E4F12F2A3EEF5F16B5F6B23D936299F82048_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, float ___0_newTransitionDuration, float ___1_newReversingShorteningFactor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionRunEvent_m805AD0DC53C530FC6A98BF36E647A576D8172EBB_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_Replace_mD29BA1CBACC9B5DBB6F115BC48E01FE99DA4BE6F_gshared (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* __this, int32_t ___0_index, TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70 ___1_timingData, StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC ___2_styleData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_Add_m12FF0C9DC5553483B7CE43FE43CD7543F5881A26_gshared (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70 ___2_timingData, StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC ___3_styleData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_UpdateProgress_mB914EEF269B1FD715DB2C14193CC9313FD9608C8_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, double ___0_currentTime, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionEventsFrameState_StateChanged_m38F0FF4E9A4F9284B6CA6FDB7049217B9E8DC810_fshared (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ProcessEventQueue_mC688A1B1B60920B9B08F5CF14E8B20ACD02D6323_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_SwapFrameStates_mD651E6B0F40BA3D9674C6ED1EE03D0DD4F1C531D_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t58168766D1E54BD4791D0209E876F0E24ACFDF18 Dictionary_2_GetEnumerator_m80B605969DF0E156E39E6AC2A1D646A545E9CD12_gshared (Dictionary_2_t765BF9715D7FF2AB2C9E5F01142AD0BFDC359E52* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_fshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tE4AF7E149217032C1AFD6D018342D58C2BB94D77 Enumerator_get_Current_m91805899B27B40B16B94C0ABBAD00442DC9D1EEF_gshared_inline (Enumerator_t58168766D1E54BD4791D0209E876F0E24ACFDF18* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 KeyValuePair_2_get_Key_m29BFACDD5CEA7793A032A003215F58FA58308EFD_gshared_inline (KeyValuePair_2_tE4AF7E149217032C1AFD6D018342D58C2BB94D77* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m3B073AA7B627862C9CF55713EB00EA50B597C40E_gshared_inline (KeyValuePair_2_tE4AF7E149217032C1AFD6D018342D58C2BB94D77* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA00621826A711026137A71100A02D160DD7FA118_gshared (Enumerator_t58168766D1E54BD4791D0209E876F0E24ACFDF18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_Clear_m2AB9551867D394B4143C9D17F0402E033865A26D_gshared (TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_Add_m382EBC5D46C51B2679221DF746DC5E79895706C6_gshared (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, EmptyData_t399475F01E0BC0B85E2FE88B9144B6DBDB94CFA5 ___2_timingData, Il2CppSharedGenericObject* ___3_styleData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionEndEvent_m7349B90B2B73E98C56D9BFCBA82235D03CDA10D7_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionStartEvent_m63C415B7DC34ABED0487174284547D9F31B921D5_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_inline (Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* __this, float ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Field_1__ctor_m6A0C971C6E2C7FC18B971B357D1CC034215D6043_fshared (Field_1_tEE1A923EA8160028BC34CE74DF77A8FB37FCA5D3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674_fshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mB3EB022FA5067096F41350560FA447FBA16BFF2B (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mE275DCDE4DC3B6FB30AB80ACEAC8363207BA9BEC_inline (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m73081D1B852400C74618D0A814BBED2FE272175D_inline (uint64_t ___0_left, uint64_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_mEC951E56E2DC500CF877DFAD5542E0920B73B00A (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m8F20119DB8CF7117F2D6E4D165C4A843F7D3586C (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m3EBF88D3E195BD2C4B0D1CCBD9F71E32233CA4F4 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mD4D4AE7733CACE50CA2FCFFFB0A16818EEC01293_inline (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_left, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_mE29E088973A17B81B830C30831075135FC8E263A (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Vector_1_GetOneValue_mE2DE5D8CFC8D7A4990743C160CD1C4ED71CDA288_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m1B5D6A9264B4450B3C14BD8FF9430354A337F2D6 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Vector_1_GetAllBitsSetValue_m99E582A6A7DA5089B26FE42E5F8FDE26A6005ED0_inline (const RuntimeMethod* method) ;

inline void TransitionEventsFrameState__ctor_m3940C8A185296F1501F7A1203913C1C38A468E0F (TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* __this, const RuntimeMethod* method)
{
	((  void (*) (TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B*, const RuntimeMethod*))TransitionEventsFrameState__ctor_m942A14500CF3DA6B1184691E8B8661CBF20F5195_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values__ctor_m154F5E2A0541CF4C0B1CD89FE135945542E64B72 (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24* __this, const RuntimeMethod* method) ;
inline AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2 AnimationDataSet_2_Create_m89AC68EF43EB4B52EC3488DA28587413170C3295 (const RuntimeMethod* method)
{
	return ((  AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2 (*) (const RuntimeMethod*))AnimationDataSet_2_Create_m89AC68EF43EB4B52EC3488DA28587413170C3295_gshared)(method);
}
inline AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23 AnimationDataSet_2_Create_m66D8C30227A8AA433238922CADEA79F39D440173 (const RuntimeMethod* method)
{
	return ((  AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23 (*) (const RuntimeMethod*))AnimationDataSet_2_Create_m66D8C30227A8AA433238922CADEA79F39D440173_gshared)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_value, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C (Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910**, const RuntimeMethod*))Dictionary_2_TryGetValue_mB4B65CDC9D463FAC9E89E96BADEFB57B3AE6E3F9_gshared)(__this, ___0_key, ___1_value, method);
}
inline Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* TransitionEventsFrameState_GetPooledQueue_m937C2DD3CE11410A8BD57AD9F9F0EF9A6575EBD6 (const RuntimeMethod* method)
{
	return ((  Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* (*) (const RuntimeMethod*))TransitionEventsFrameState_GetPooledQueue_m937C2DD3CE11410A8BD57AD9F9F0EF9A6575EBD6_gshared)(method);
}
inline void Dictionary_2_Add_m4D0C3095996E7B1D88B163C7DA308689CCA71337 (Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910*, const RuntimeMethod*))Dictionary_2_Add_m0EA7626121360C44DE60550B464FE246F23ED0BC_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Queue_1_Enqueue_mC0C477097247ABAE611BD10D005CBADBED88FCAE (Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* __this, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910*, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*, const RuntimeMethod*))Queue_1_Enqueue_m16F75E528EE6527E8B9E76AE7D7E455D5476C606_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
inline void TransitionEventsFrameState_RegisterChange_m5F6DEA9818F2C1C48A04F679E97131FFEB2594DD (TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* __this, const RuntimeMethod* method)
{
	((  void (*) (TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B*, const RuntimeMethod*))TransitionEventsFrameState_RegisterChange_mEABB5D4C10E575520EAA056A082AFCDD5341D837_fshared)(__this, method);
}
inline EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D (Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* __this, const RuntimeMethod* method)
{
	return ((  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* (*) (Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910*, const RuntimeMethod*))Queue_1_Dequeue_m1ECED0A4B619428F2561AA3D053E73A097A10193_gshared)(__this, method);
}
inline void TransitionEventsFrameState_UnregisterChange_m78952B6E84A4112A16E6D508FF64778390E6F1A1 (TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* __this, const RuntimeMethod* method)
{
	((  void (*) (TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B*, const RuntimeMethod*))TransitionEventsFrameState_UnregisterChange_m41DBE132FF16D7B667B0495BDC2689AEFCCBB2B3_fshared)(__this, method);
}
inline int32_t Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_inline (Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910*, const RuntimeMethod*))Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, int32_t ___0_eventCategory, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9 (ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, int32_t ___1_property, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805 (Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m9A76CAD9BFF257065C6D43A214FD868C0D1F3EBA_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93 (Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_mC30A7B919AFA130E2A37D563DA310A3B0F56E446_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4 (Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, int32_t, const RuntimeMethod*))Dictionary_2_Add_m48B4E23D08F6E9AB6D3EA0872E88FE2F39AA24BF_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* __this, int32_t ___0_stylePropertyId, const RuntimeMethod* method) ;
inline TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF* TransitionEventBase_1_GetPooled_m5A4FB9CF00193D3079D46E507D66AB77C1F4A66A (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___0_stylePropertyName, double ___1_elapsedTime, const RuntimeMethod* method)
{
	return ((  TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF* (*) (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF, double, const RuntimeMethod*))TransitionEventBase_1_GetPooled_mF3C4D7710B89EFFE816AF991CAB43B40F8013091_gshared)(___0_stylePropertyName, ___1_elapsedTime, method);
}
inline void Values_1_QueueEvent_m64B86A1C2212A8788CA3F633ED58B1D5D6ABF325 (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___1_epp, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9*, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))Values_1_QueueEvent_m64B86A1C2212A8788CA3F633ED58B1D5D6ABF325_gshared)(__this, ___0_evt, ___1_epp, method);
}
inline TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF* TransitionEventBase_1_GetPooled_mFD665DFD6C012691EA5BE90A0AF28D3BE715ED61 (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___0_stylePropertyName, double ___1_elapsedTime, const RuntimeMethod* method)
{
	return ((  TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF* (*) (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF, double, const RuntimeMethod*))TransitionEventBase_1_GetPooled_mF3C4D7710B89EFFE816AF991CAB43B40F8013091_gshared)(___0_stylePropertyName, ___1_elapsedTime, method);
}
inline TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD* TransitionEventBase_1_GetPooled_m57317A5C89342419B0A31E8FBB622786C7C283CA (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___0_stylePropertyName, double ___1_elapsedTime, const RuntimeMethod* method)
{
	return ((  TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD* (*) (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF, double, const RuntimeMethod*))TransitionEventBase_1_GetPooled_mF3C4D7710B89EFFE816AF991CAB43B40F8013091_gshared)(___0_stylePropertyName, ___1_elapsedTime, method);
}
inline void Values_1_ClearEventQueue_mB4BF7EC8A8414D812D66705E3B46A02CAA8E2F04 (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_epp, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))Values_1_ClearEventQueue_mB4BF7EC8A8414D812D66705E3B46A02CAA8E2F04_gshared)(__this, ___0_epp, method);
}
inline TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5 (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___0_stylePropertyName, double ___1_elapsedTime, const RuntimeMethod* method)
{
	return ((  TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* (*) (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF, double, const RuntimeMethod*))TransitionEventBase_1_GetPooled_mF3C4D7710B89EFFE816AF991CAB43B40F8013091_gshared)(___0_stylePropertyName, ___1_elapsedTime, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventDispatcherGate__ctor_mF02241D3AB4F068E3F0493D2E407C344C66810A9 (EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097* __this, EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* ___0_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventDispatcherGate_Dispose_m55EF7949617C12B917FF0374D4F140F2054CE9C5 (EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097* __this, const RuntimeMethod* method) ;
inline void Values_1_SendTransitionCancelEvent_mA30382EBAD93B4C6A84F78ACB1F17724012235EB (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, double ___2_panelElapsed, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, double, const RuntimeMethod*))Values_1_SendTransitionCancelEvent_m358CB250222E4E6C199C8A265246024812EF8469_fshared)(__this, ___0_ve, ___1_runningIndex, ___2_panelElapsed, method);
}
inline void Values_1_ForceComputedStyleEndValue_mE1D23011959E4D84B2E371692FF38DC0789962E8 (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, int32_t ___0_runningIndex, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9*, int32_t, const RuntimeMethod*))Values_1_ForceComputedStyleEndValue_mE1D23011959E4D84B2E371692FF38DC0789962E8_gshared)(__this, ___0_runningIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
inline void AnimationDataSet_2_RemoveAll_m8F6D49F18326DD002D7085CFD37E996836D47827 (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* __this, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*, const RuntimeMethod*))AnimationDataSet_2_RemoveAll_m8F6D49F18326DD002D7085CFD37E996836D47827_gshared)(__this, method);
}
inline void AnimationDataSet_2_RemoveAll_m37308DF9D331F7D9483F49E9221B50FF02999395 (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* __this, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23*, const RuntimeMethod*))AnimationDataSet_2_RemoveAll_m37308DF9D331F7D9483F49E9221B50FF02999395_gshared)(__this, method);
}
inline void AnimationDataSet_2_RemoveAll_m4A717E7EAF3AFA6020EA761371A55A95FB911B87 (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))AnimationDataSet_2_RemoveAll_m4A717E7EAF3AFA6020EA761371A55A95FB911B87_gshared)(__this, ___0_ve, method);
}
inline void AnimationDataSet_2_RemoveAll_mD0243DBFC2A00AF96889112ACF6B0A5BBAE3D680 (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))AnimationDataSet_2_RemoveAll_mD0243DBFC2A00AF96889112ACF6B0A5BBAE3D680_gshared)(__this, ___0_ve, method);
}
inline bool AnimationDataSet_2_IndexOf_m426579E3950B9D06630F78C3592195372381B80F (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_prop, int32_t* ___2_index, const RuntimeMethod* method)
{
	return ((  bool (*) (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int32_t*, const RuntimeMethod*))AnimationDataSet_2_IndexOf_m39B27A0CD7E79387931C2E717D46F83956674874_fshared)(__this, ___0_ve, ___1_prop, ___2_index, method);
}
inline void Values_1_QueueTransitionCancelEvent_mC76207505D12EC59FE24D569E0C4977671A702A1 (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, double ___2_panelElapsed, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, double, const RuntimeMethod*))Values_1_QueueTransitionCancelEvent_mC76207505D12EC59FE24D569E0C4977671A702A1_gshared)(__this, ___0_ve, ___1_runningIndex, ___2_panelElapsed, method);
}
inline void AnimationDataSet_2_Remove_m0CC33F6F7FBB55034896C5826F7FBC9247D8DFEE (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* __this, int32_t ___0_cancelledIndex, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*, int32_t, const RuntimeMethod*))AnimationDataSet_2_Remove_m0CC33F6F7FBB55034896C5826F7FBC9247D8DFEE_gshared)(__this, ___0_cancelledIndex, method);
}
inline bool AnimationDataSet_2_IndexOf_mF2A16E06AE574B25B870907948E93EF40AFD7A10 (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_prop, int32_t* ___2_index, const RuntimeMethod* method)
{
	return ((  bool (*) (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int32_t*, const RuntimeMethod*))AnimationDataSet_2_IndexOf_m39B27A0CD7E79387931C2E717D46F83956674874_fshared)(__this, ___0_ve, ___1_prop, ___2_index, method);
}
inline void AnimationDataSet_2_Remove_mBD0D5CCF6AE3BC40F63E502AE2530BAFE0101530 (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* __this, int32_t ___0_cancelledIndex, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23*, int32_t, const RuntimeMethod*))AnimationDataSet_2_Remove_mBD0D5CCF6AE3BC40F63E502AE2530BAFE0101530_gshared)(__this, ___0_cancelledIndex, method);
}
inline void AnimationDataSet_2_GetActivePropertiesForElement_m3BF16AE3122B30FB9A54751867BD637AFE549689 (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* ___1_outProperties, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269*, const RuntimeMethod*))AnimationDataSet_2_GetActivePropertiesForElement_mA378BCE8A10910B60FD3417B89FA48871613C86D_fshared)(__this, ___0_ve, ___1_outProperties, method);
}
inline void AnimationDataSet_2_GetActivePropertiesForElement_mBADCAFF26135CE1D2783CD917BCFF536C3894071 (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* ___1_outProperties, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269*, const RuntimeMethod*))AnimationDataSet_2_GetActivePropertiesForElement_mA378BCE8A10910B60FD3417B89FA48871613C86D_fshared)(__this, ___0_ve, ___1_outProperties, method);
}
inline bool Func_3_Invoke_mF53D8E0776F9AABF2CE8F1DD56CEF19FDB4C1599_inline (Func_3_t77F22AB9767953FDC31A6CFFF00E1541826CCDD3* __this, Il2CppSharedGenericObject* ___0_arg1, Il2CppSharedGenericObject* ___1_arg2, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_t77F22AB9767953FDC31A6CFFF00E1541826CCDD3*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, const RuntimeMethod*))Func_3_Invoke_mF53D8E0776F9AABF2CE8F1DD56CEF19FDB4C1599_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline float Values_1_ComputeReversingShorteningFactor_m63659F49588A1FFFBBC96B85AA4F5016B174DDC6 (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, int32_t ___0_oldIndex, const RuntimeMethod* method)
{
	return ((  float (*) (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9*, int32_t, const RuntimeMethod*))Values_1_ComputeReversingShorteningFactor_m3DDD463A0FCDE2463723B6ACCFD6E62F314B257E_fshared)(__this, ___0_oldIndex, method);
}
inline float Values_1_ComputeReversingDelay_m9CB25078EF223DDDFA2759EAB876C60770878104 (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, float ___0_delay, float ___1_newReversingShorteningFactor, const RuntimeMethod* method)
{
	return ((  float (*) (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9*, float, float, const RuntimeMethod*))Values_1_ComputeReversingDelay_mF3433FDACD867828A82413E8C14164F64090E5A6_fshared)(__this, ___0_delay, ___1_newReversingShorteningFactor, method);
}
inline float Values_1_ComputeReversingDuration_mBAD1B6CE0E73B9DFB65BF288287F8745B40078A2 (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, float ___0_newTransitionDuration, float ___1_newReversingShorteningFactor, const RuntimeMethod* method)
{
	return ((  float (*) (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9*, float, float, const RuntimeMethod*))Values_1_ComputeReversingDuration_m5A95E4F12F2A3EEF5F16B5F6B23D936299F82048_fshared)(__this, ___0_newTransitionDuration, ___1_newReversingShorteningFactor, method);
}
inline void Values_1_QueueTransitionRunEvent_m805AD0DC53C530FC6A98BF36E647A576D8172EBB (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, const RuntimeMethod*))Values_1_QueueTransitionRunEvent_m805AD0DC53C530FC6A98BF36E647A576D8172EBB_gshared)(__this, ___0_ve, ___1_runningIndex, method);
}
inline void AnimationDataSet_2_Replace_mD29BA1CBACC9B5DBB6F115BC48E01FE99DA4BE6F (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* __this, int32_t ___0_index, TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70 ___1_timingData, StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC ___2_styleData, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*, int32_t, TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70, StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC, const RuntimeMethod*))AnimationDataSet_2_Replace_mD29BA1CBACC9B5DBB6F115BC48E01FE99DA4BE6F_gshared)(__this, ___0_index, ___1_timingData, ___2_styleData, method);
}
inline void AnimationDataSet_2_Add_m12FF0C9DC5553483B7CE43FE43CD7543F5881A26 (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70 ___2_timingData, StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC ___3_styleData, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70, StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC, const RuntimeMethod*))AnimationDataSet_2_Add_m12FF0C9DC5553483B7CE43FE43CD7543F5881A26_gshared)(__this, ___0_owner, ___1_prop, ___2_timingData, ___3_styleData, method);
}
inline void Values_1_UpdateProgress_mB914EEF269B1FD715DB2C14193CC9313FD9608C8 (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, double ___0_currentTime, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9*, double, const RuntimeMethod*))Values_1_UpdateProgress_mB914EEF269B1FD715DB2C14193CC9313FD9608C8_gshared)(__this, ___0_currentTime, method);
}
inline bool TransitionEventsFrameState_StateChanged_mDC31F81F938111410DB568ED809F4B1A1395600B (TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B*, const RuntimeMethod*))TransitionEventsFrameState_StateChanged_m38F0FF4E9A4F9284B6CA6FDB7049217B9E8DC810_fshared)(__this, method);
}
inline void Values_1_ProcessEventQueue_mC688A1B1B60920B9B08F5CF14E8B20ACD02D6323 (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9*, const RuntimeMethod*))Values_1_ProcessEventQueue_mC688A1B1B60920B9B08F5CF14E8B20ACD02D6323_gshared)(__this, method);
}
inline void Values_1_SwapFrameStates_m7E4E49F32703E42158DEEC53F1BC3D208AC79A23 (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9*, const RuntimeMethod*))Values_1_SwapFrameStates_mD651E6B0F40BA3D9674C6ED1EE03D0DD4F1C531D_fshared)(__this, method);
}
inline Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD (Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A (*) (Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m80B605969DF0E156E39E6AC2A1D646A545E9CD12_gshared)(__this, method);
}
inline void Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172 (Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A*, const RuntimeMethod*))Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_fshared)(__this, method);
}
inline KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline (Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D (*) (Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A*, const RuntimeMethod*))Enumerator_get_Current_m91805899B27B40B16B94C0ABBAD00442DC9D1EEF_gshared_inline)(__this, method);
}
inline ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_inline (KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D* __this, const RuntimeMethod* method)
{
	return ((  ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 (*) (KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D*, const RuntimeMethod*))KeyValuePair_2_get_Key_m29BFACDD5CEA7793A032A003215F58FA58308EFD_gshared_inline)(__this, method);
}
inline Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline (KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D* __this, const RuntimeMethod* method)
{
	return ((  Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* (*) (KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D*, const RuntimeMethod*))KeyValuePair_2_get_Value_m3B073AA7B627862C9CF55713EB00EA50B597C40E_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140 (Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A*, const RuntimeMethod*))Enumerator_MoveNext_mA00621826A711026137A71100A02D160DD7FA118_gshared)(__this, method);
}
inline void TransitionEventsFrameState_Clear_m2AB9551867D394B4143C9D17F0402E033865A26D (TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* __this, const RuntimeMethod* method)
{
	((  void (*) (TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B*, const RuntimeMethod*))TransitionEventsFrameState_Clear_m2AB9551867D394B4143C9D17F0402E033865A26D_gshared)(__this, method);
}
inline void AnimationDataSet_2_Add_m382EBC5D46C51B2679221DF746DC5E79895706C6 (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, EmptyData_t399475F01E0BC0B85E2FE88B9144B6DBDB94CFA5 ___2_timingData, Il2CppSharedGenericObject* ___3_styleData, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, EmptyData_t399475F01E0BC0B85E2FE88B9144B6DBDB94CFA5, Il2CppSharedGenericObject*, const RuntimeMethod*))AnimationDataSet_2_Add_m382EBC5D46C51B2679221DF746DC5E79895706C6_gshared)(__this, ___0_owner, ___1_prop, ___2_timingData, ___3_styleData, method);
}
inline void Values_1_QueueTransitionEndEvent_m7349B90B2B73E98C56D9BFCBA82235D03CDA10D7 (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, const RuntimeMethod*))Values_1_QueueTransitionEndEvent_m7349B90B2B73E98C56D9BFCBA82235D03CDA10D7_gshared)(__this, ___0_ve, ___1_runningIndex, method);
}
inline void Values_1_QueueTransitionStartEvent_m63C415B7DC34ABED0487174284547D9F31B921D5 (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, const RuntimeMethod*))Values_1_QueueTransitionStartEvent_m63C415B7DC34ABED0487174284547D9F31B921D5_gshared)(__this, ___0_ve, ___1_runningIndex, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_inline (Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* __this, float ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
inline void Field_1__ctor_m7C303BA68691F2521E9EC689B23AE797B4DFBB05 (Field_1_tA072783C26CACD3E84F9B62900C79E98AA01B8ED* __this, const RuntimeMethod* method)
{
	((  void (*) (Field_1_tA072783C26CACD3E84F9B62900C79E98AA01B8ED*, const RuntimeMethod*))Field_1__ctor_m6A0C971C6E2C7FC18B971B357D1CC034215D6043_fshared)(__this, method);
}
inline void Field_1__ctor_m5E85360C971446C73E1A8E5ED7DA17D7EDC90E1B (Field_1_tC3CCA8F7619A0B639B6671BD922EC68E34595E18* __this, const RuntimeMethod* method)
{
	((  void (*) (Field_1_tC3CCA8F7619A0B639B6671BD922EC68E34595E18*, const RuntimeMethod*))Field_1__ctor_m6A0C971C6E2C7FC18B971B357D1CC034215D6043_fshared)(__this, method);
}
inline void Field_1__ctor_m987712BF4E8BBF11473DA83B4CF70877C002430C (Field_1_t13BBC583A7E521A9A0C5B9A2B8B537D8CEE550BD* __this, const RuntimeMethod* method)
{
	((  void (*) (Field_1_t13BBC583A7E521A9A0C5B9A2B8B537D8CEE550BD*, const RuntimeMethod*))Field_1__ctor_m6A0C971C6E2C7FC18B971B357D1CC034215D6043_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200 (uint16_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7 (int32_t ___0_h1, int32_t ___1_h2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F (RuntimeObject* ___0_formatProvider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_mBD648884B6569D3E7D779669EEFCB1ED5EE4A521 (uint16_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
inline void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674_fshared)(__this, ___0_existingRegister, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mB3EB022FA5067096F41350560FA447FBA16BFF2B (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mE275DCDE4DC3B6FB30AB80ACEAC8363207BA9BEC_inline (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m73081D1B852400C74618D0A814BBED2FE272175D_inline (uint64_t ___0_left, uint64_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_mEC951E56E2DC500CF877DFAD5542E0920B73B00A (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m8F20119DB8CF7117F2D6E4D165C4A843F7D3586C (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m3EBF88D3E195BD2C4B0D1CCBD9F71E32233CA4F4 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m779041C8FDD58BF8617838B00CD041788DB2F1A3 (uint64_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mD4D4AE7733CACE50CA2FCFFFB0A16818EEC01293_inline (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_left, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
inline void Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674_fshared)(__this, ___0_existingRegister, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_mE29E088973A17B81B830C30831075135FC8E263A (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Vector_1_GetOneValue_mE2DE5D8CFC8D7A4990743C160CD1C4ED71CDA288_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m1B5D6A9264B4450B3C14BD8FF9430354A337F2D6 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Vector_1_GetAllBitsSetValue_m99E582A6A7DA5089B26FE42E5F8FDE26A6005ED0_inline (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19150
// Method Definition Index: 19152
// Method Definition Index: 19153
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Values_1_Copy_mB7AFA751DB517428508E419E9E29EFB0C9A27486_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_value;
		return L_0;
	}
}
// Method Definition Index: 19154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1__ctor_m220C81785F8E08B777B63A0ADEAA3C4FB4C7C19C_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_0 = (TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		TransitionEventsFrameState__ctor_m3940C8A185296F1501F7A1203913C1C38A468E0F(L_0, NULL);
		__this->___m_CurrentFrameEventsState = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentFrameEventsState), (void*)L_0);
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_1 = (TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		TransitionEventsFrameState__ctor_m3940C8A185296F1501F7A1203913C1C38A468E0F(L_1, NULL);
		__this->___m_NextFrameEventsState = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NextFrameEventsState), (void*)L_1);
		Values__ctor_m154F5E2A0541CF4C0B1CD89FE135945542E64B72((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this, NULL);
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2 L_2;
		L_2 = AnimationDataSet_2_Create_m89AC68EF43EB4B52EC3488DA28587413170C3295(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		__this->___running = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___elements), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___properties), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___timing), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___style), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___indices), (void*)NULL);
		#endif
		AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23 L_3;
		L_3 = AnimationDataSet_2_Create_m66D8C30227A8AA433238922CADEA79F39D440173(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		__this->___completed = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___elements), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___properties), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___timing), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___style), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___indices), (void*)NULL);
		#endif
		__this->___m_CurrentTime = (0.0);
		return;
	}
}
// Method Definition Index: 19155
// Method Definition Index: 19156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueEvent_m64B86A1C2212A8788CA3F633ED58B1D5D6ABF325_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___1_epp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4D0C3095996E7B1D88B163C7DA308689CCA71337_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mC0C477097247ABAE611BD10D005CBADBED88FCAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(TransitionEventsFrameState_t32DCDE0EAFDCF0AA53BBA8A5C38455E40DC487ED_StaticInit);
	//<source_info:<no-source>:1>
	Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* V_0 = NULL;
	{
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_0 = ___0_evt;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_1 = ___1_epp;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2 = L_1.___element;
		NullCheck(L_0);
		EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline(L_0, L_2, NULL);
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_3 = __this->___m_NextFrameEventsState;
		NullCheck(L_3);
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_4 = L_3->___elementPropertyQueuedEvents;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_5 = ___1_epp;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C(L_4, L_5, (&V_0), Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0039;
		}
	}
	{
		CHECKED_LOCAL_INIT(TransitionEventsFrameState_t32DCDE0EAFDCF0AA53BBA8A5C38455E40DC487ED_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_7;
		L_7 = TransitionEventsFrameState_GetPooledQueue_m937C2DD3CE11410A8BD57AD9F9F0EF9A6575EBD6(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		V_0 = L_7;
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_8 = __this->___m_NextFrameEventsState;
		NullCheck(L_8);
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_9 = L_8->___elementPropertyQueuedEvents;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_10 = ___1_epp;
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_11 = V_0;
		NullCheck(L_9);
		Dictionary_2_Add_m4D0C3095996E7B1D88B163C7DA308689CCA71337(L_9, L_10, L_11, Dictionary_2_Add_m4D0C3095996E7B1D88B163C7DA308689CCA71337_RuntimeMethod_var);
	}

IL_0039:
	{
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_12 = V_0;
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_13 = ___0_evt;
		NullCheck(L_12);
		Queue_1_Enqueue_mC0C477097247ABAE611BD10D005CBADBED88FCAE(L_12, L_13, Queue_1_Enqueue_mC0C477097247ABAE611BD10D005CBADBED88FCAE_RuntimeMethod_var);
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_14 = __this->___m_NextFrameEventsState;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___panel;
		if (L_15)
		{
			goto IL_0063;
		}
	}
	{
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_16 = __this->___m_NextFrameEventsState;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_17 = ___1_epp;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18 = L_17.___element;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_18, NULL);
		NullCheck(L_16);
		L_16->___panel = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___panel), (void*)L_19);
	}

IL_0063:
	{
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_20 = __this->___m_NextFrameEventsState;
		NullCheck(L_20);
		TransitionEventsFrameState_RegisterChange_m5F6DEA9818F2C1C48A04F679E97131FFEB2594DD(L_20, NULL);
		return;
	}
}
// Method Definition Index: 19157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ClearEventQueue_mB4BF7EC8A8414D812D66705E3B46A02CAA8E2F04_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_epp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* V_0 = NULL;
	{
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_0 = __this->___m_NextFrameEventsState;
		NullCheck(L_0);
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_1 = L_0->___elementPropertyQueuedEvents;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_2 = ___0_epp;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		goto IL_002d;
	}

IL_0017:
	{
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_4 = V_0;
		NullCheck(L_4);
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_5;
		L_5 = Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D(L_4, Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var);
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(15, L_5);
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_6 = __this->___m_NextFrameEventsState;
		NullCheck(L_6);
		TransitionEventsFrameState_UnregisterChange_m78952B6E84A4112A16E6D508FF64778390E6F1A1(L_6, NULL);
	}

IL_002d:
	{
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_inline(L_7, NULL);
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0017;
		}
	}

IL_0036:
	{
		return;
	}
}
// Method Definition Index: 19158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionRunEvent_m805AD0DC53C530FC6A98BF36E647A576D8172EBB_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_m5A4FB9CF00193D3079D46E507D66AB77C1F4A66A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* V_3 = NULL;
	float V_4 = 0.0f;
	TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF* V_5 = NULL;
	float G_B8_0 = 0.0f;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, ((int32_t)13), NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_2 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_3 = L_2->___properties;
		int32_t L_4 = ___1_runningIndex;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (int32_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = ___0_ve;
		int32_t L_8 = V_0;
		CHECKED_LOCAL_INIT(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticInit,(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9((&V_1), L_7, L_8, NULL);
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_9 = __this->___m_NextFrameEventsState;
		NullCheck(L_9);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_10 = L_9->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805(L_10, L_11, (&V_2), Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_13 = __this->___m_NextFrameEventsState;
		NullCheck(L_13);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_14 = L_13->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_14);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_14, L_15, ((int32_t)((int32_t)L_16|1)), Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		goto IL_005f;
	}

IL_004d:
	{
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_17 = __this->___m_NextFrameEventsState;
		NullCheck(L_17);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_18 = L_17->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_19 = V_1;
		NullCheck(L_18);
		Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4(L_18, L_19, 1, Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
	}

IL_005f:
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_20 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		TimingDataU5BU5D_t4B3E0005A73C94EB00881FDF1758D709D04F4F79* L_21 = L_20->___timing;
		int32_t L_22 = ___1_runningIndex;
		NullCheck(L_21);
		V_3 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)));
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_23 = V_3;
		float L_24 = L_23->___delay;
		if ((((float)L_24) < ((float)(0.0f))))
		{
			goto IL_0085;
		}
	}
	{
		G_B8_0 = (0.0f);
		goto IL_00a1;
	}

IL_0085:
	{
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_25 = V_3;
		float L_26 = L_25->___delay;
		float L_27;
		L_27 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((-L_26)), (0.0f), NULL);
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_28 = V_3;
		float L_29 = L_28->___duration;
		float L_30;
		L_30 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_27, L_29, NULL);
		G_B8_0 = L_30;
	}

IL_00a1:
	{
		V_4 = G_B8_0;
		int32_t L_31 = V_0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_32;
		memset((&L_32), 0, sizeof(L_32));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_32), L_31, NULL);
		float L_33 = V_4;
		double L_34 = (il2cpp_codegen_conv<double,float,float,false,false>(L_33,NULL));
		TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF* L_35;
		L_35 = TransitionEventBase_1_GetPooled_m5A4FB9CF00193D3079D46E507D66AB77C1F4A66A(L_32, L_34, TransitionEventBase_1_GetPooled_m5A4FB9CF00193D3079D46E507D66AB77C1F4A66A_RuntimeMethod_var);
		V_5 = L_35;
		TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF* L_36 = V_5;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_37 = V_1;
		Values_1_QueueEvent_m64B86A1C2212A8788CA3F633ED58B1D5D6ABF325(__this, L_36, L_37, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		return;
	}
}
// Method Definition Index: 19159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionStartEvent_m63C415B7DC34ABED0487174284547D9F31B921D5_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_mFD665DFD6C012691EA5BE90A0AF28D3BE715ED61_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* V_3 = NULL;
	float V_4 = 0.0f;
	TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF* V_5 = NULL;
	float G_B8_0 = 0.0f;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, ((int32_t)13), NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_2 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_3 = L_2->___properties;
		int32_t L_4 = ___1_runningIndex;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (int32_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = ___0_ve;
		int32_t L_8 = V_0;
		CHECKED_LOCAL_INIT(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticInit,(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9((&V_1), L_7, L_8, NULL);
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_9 = __this->___m_NextFrameEventsState;
		NullCheck(L_9);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_10 = L_9->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805(L_10, L_11, (&V_2), Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_13 = __this->___m_NextFrameEventsState;
		NullCheck(L_13);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_14 = L_13->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_14);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_14, L_15, ((int32_t)((int32_t)L_16|2)), Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		goto IL_005f;
	}

IL_004d:
	{
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_17 = __this->___m_NextFrameEventsState;
		NullCheck(L_17);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_18 = L_17->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_19 = V_1;
		NullCheck(L_18);
		Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4(L_18, L_19, 2, Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
	}

IL_005f:
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_20 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		TimingDataU5BU5D_t4B3E0005A73C94EB00881FDF1758D709D04F4F79* L_21 = L_20->___timing;
		int32_t L_22 = ___1_runningIndex;
		NullCheck(L_21);
		V_3 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)));
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_23 = V_3;
		float L_24 = L_23->___delay;
		if ((((float)L_24) < ((float)(0.0f))))
		{
			goto IL_0085;
		}
	}
	{
		G_B8_0 = (0.0f);
		goto IL_00a1;
	}

IL_0085:
	{
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_25 = V_3;
		float L_26 = L_25->___delay;
		float L_27;
		L_27 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((-L_26)), (0.0f), NULL);
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_28 = V_3;
		float L_29 = L_28->___duration;
		float L_30;
		L_30 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_27, L_29, NULL);
		G_B8_0 = L_30;
	}

IL_00a1:
	{
		V_4 = G_B8_0;
		int32_t L_31 = V_0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_32;
		memset((&L_32), 0, sizeof(L_32));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_32), L_31, NULL);
		float L_33 = V_4;
		double L_34 = (il2cpp_codegen_conv<double,float,float,false,false>(L_33,NULL));
		TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF* L_35;
		L_35 = TransitionEventBase_1_GetPooled_mFD665DFD6C012691EA5BE90A0AF28D3BE715ED61(L_32, L_34, TransitionEventBase_1_GetPooled_mFD665DFD6C012691EA5BE90A0AF28D3BE715ED61_RuntimeMethod_var);
		V_5 = L_35;
		TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF* L_36 = V_5;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_37 = V_1;
		Values_1_QueueEvent_m64B86A1C2212A8788CA3F633ED58B1D5D6ABF325(__this, L_36, L_37, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		return;
	}
}
// Method Definition Index: 19160
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionEndEvent_m7349B90B2B73E98C56D9BFCBA82235D03CDA10D7_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_m57317A5C89342419B0A31E8FBB622786C7C283CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* V_3 = NULL;
	TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD* V_4 = NULL;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, ((int32_t)13), NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_2 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_3 = L_2->___properties;
		int32_t L_4 = ___1_runningIndex;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (int32_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = ___0_ve;
		int32_t L_8 = V_0;
		CHECKED_LOCAL_INIT(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticInit,(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9((&V_1), L_7, L_8, NULL);
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_9 = __this->___m_NextFrameEventsState;
		NullCheck(L_9);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_10 = L_9->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805(L_10, L_11, (&V_2), Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_13 = __this->___m_NextFrameEventsState;
		NullCheck(L_13);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_14 = L_13->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_14);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_14, L_15, ((int32_t)((int32_t)L_16|4)), Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		goto IL_005f;
	}

IL_004d:
	{
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_17 = __this->___m_NextFrameEventsState;
		NullCheck(L_17);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_18 = L_17->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_19 = V_1;
		NullCheck(L_18);
		Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4(L_18, L_19, 4, Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
	}

IL_005f:
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_20 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		TimingDataU5BU5D_t4B3E0005A73C94EB00881FDF1758D709D04F4F79* L_21 = L_20->___timing;
		int32_t L_22 = ___1_runningIndex;
		NullCheck(L_21);
		V_3 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)));
		int32_t L_23 = V_0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_24;
		memset((&L_24), 0, sizeof(L_24));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_24), L_23, NULL);
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_25 = V_3;
		float L_26 = L_25->___duration;
		double L_27 = (il2cpp_codegen_conv<double,float,float,false,false>(L_26,NULL));
		TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD* L_28;
		L_28 = TransitionEventBase_1_GetPooled_m57317A5C89342419B0A31E8FBB622786C7C283CA(L_24, L_27, TransitionEventBase_1_GetPooled_m57317A5C89342419B0A31E8FBB622786C7C283CA_RuntimeMethod_var);
		V_4 = L_28;
		TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD* L_29 = V_4;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_30 = V_1;
		Values_1_QueueEvent_m64B86A1C2212A8788CA3F633ED58B1D5D6ABF325(__this, L_29, L_30, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		return;
	}
}
// Method Definition Index: 19161
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionCancelEvent_mC76207505D12EC59FE24D569E0C4977671A702A1_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, double ___2_panelElapsed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* V_4 = NULL;
	double V_5 = 0.0;
	TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* V_6 = NULL;
	double G_B13_0 = 0.0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, ((int32_t)13), NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_2 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_3 = L_2->___properties;
		int32_t L_4 = ___1_runningIndex;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (int32_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = ___0_ve;
		int32_t L_8 = V_0;
		CHECKED_LOCAL_INIT(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticInit,(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9((&V_1), L_7, L_8, NULL);
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_9 = __this->___m_NextFrameEventsState;
		NullCheck(L_9);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_10 = L_9->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805(L_10, L_11, (&V_3), Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_13 = V_3;
		if (!L_13)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_14 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)L_14&8))) == ((uint32_t)8))))
		{
			goto IL_005d;
		}
	}

IL_0040:
	{
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_15 = __this->___m_NextFrameEventsState;
		NullCheck(L_15);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_16 = L_15->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_17 = V_1;
		NullCheck(L_16);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_16, L_17, 8, Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_18 = V_1;
		Values_1_ClearEventQueue_mB4BF7EC8A8414D812D66705E3B46A02CAA8E2F04(__this, L_18, NULL);
		V_2 = (bool)1;
		goto IL_008e;
	}

IL_005d:
	{
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_19 = __this->___m_NextFrameEventsState;
		NullCheck(L_19);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_20 = L_19->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_21 = V_1;
		NullCheck(L_20);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_20, L_21, 0, Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_22 = V_1;
		Values_1_ClearEventQueue_mB4BF7EC8A8414D812D66705E3B46A02CAA8E2F04(__this, L_22, NULL);
		V_2 = (bool)0;
		goto IL_008e;
	}

IL_007a:
	{
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_23 = __this->___m_NextFrameEventsState;
		NullCheck(L_23);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_24 = L_23->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_25 = V_1;
		NullCheck(L_24);
		Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4(L_24, L_25, 8, Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		V_2 = (bool)1;
	}

IL_008e:
	{
		bool L_26 = V_2;
		if (L_26)
		{
			goto IL_0092;
		}
	}
	{
		return;
	}

IL_0092:
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_27 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		TimingDataU5BU5D_t4B3E0005A73C94EB00881FDF1758D709D04F4F79* L_28 = L_27->___timing;
		int32_t L_29 = ___1_runningIndex;
		NullCheck(L_28);
		V_4 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)));
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_30 = V_4;
		bool L_31 = L_30->___isStarted;
		if (L_31)
		{
			goto IL_00b9;
		}
	}
	{
		G_B13_0 = (0.0);
		goto IL_00c2;
	}

IL_00b9:
	{
		double L_32 = ___2_panelElapsed;
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_33 = V_4;
		double L_34 = L_33->___startTime;
		G_B13_0 = ((double)il2cpp_codegen_subtract(L_32, L_34));
	}

IL_00c2:
	{
		V_5 = G_B13_0;
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_35 = V_4;
		float L_36 = L_35->___delay;
		if ((!(((float)L_36) < ((float)(0.0f)))))
		{
			goto IL_00e0;
		}
	}
	{
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_37 = V_4;
		float L_38 = L_37->___delay;
		double L_39 = (il2cpp_codegen_conv<double,float,float,false,false>(((-L_38)),NULL));
		double L_40 = V_5;
		V_5 = ((double)il2cpp_codegen_add(L_39, L_40));
	}

IL_00e0:
	{
		int32_t L_41 = V_0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_42;
		memset((&L_42), 0, sizeof(L_42));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_42), L_41, NULL);
		double L_43 = V_5;
		TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_44;
		L_44 = TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5(L_42, L_43, TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5_RuntimeMethod_var);
		V_6 = L_44;
		TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_45 = V_6;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_46 = V_1;
		Values_1_QueueEvent_m64B86A1C2212A8788CA3F633ED58B1D5D6ABF325(__this, L_45, L_46, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		return;
	}
}
// Method Definition Index: 19162
// Method Definition Index: 19163
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_CancelAllAnimations_mC3E525B4506AB297BCFB8B21027C59C7D387FAC1_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_0 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		int32_t L_1 = L_0->___count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_3 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_4 = L_3->___elements;
		NullCheck(L_4);
		int32_t L_5 = 0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_6, NULL);
		NullCheck(L_7);
		EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* L_8;
		L_8 = InterfaceFuncInvoker0< EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* >::Invoke(1, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, L_7);
		EventDispatcherGate__ctor_mF02241D3AB4F068E3F0493D2E407C344C66810A9((&V_2), L_8, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007c:
			{
				EventDispatcherGate_Dispose_m55EF7949617C12B917FF0374D4F140F2054CE9C5((&V_2), NULL);
				return;
			}
		});
		try
		{
			{
				V_3 = 0;
				goto IL_0076_1;
			}

IL_0035_1:
			{
				AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_9 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
				VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_10 = L_9->___elements;
				int32_t L_11 = V_3;
				NullCheck(L_10);
				int32_t L_12 = L_11;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
				V_4 = L_13;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_14 = V_4;
				int32_t L_15 = V_3;
				double L_16 = __this->___m_CurrentTime;
				Values_1_SendTransitionCancelEvent_mA30382EBAD93B4C6A84F78ACB1F17724012235EB(__this, L_14, L_15, L_16, NULL);
				int32_t L_17 = V_3;
				Values_1_ForceComputedStyleEndValue_mE1D23011959E4D84B2E371692FF38DC0789962E8(__this, L_17, NULL);
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18 = V_4;
				NullCheck(L_18);
				RuntimeObject* L_19;
				L_19 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_18, NULL);
				RuntimeObject* L_20 = L_19;
				NullCheck(L_20);
				int32_t L_21;
				L_21 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_20);
				V_5 = L_21;
				int32_t L_22 = V_5;
				NullCheck(L_20);
				InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_20, ((int32_t)il2cpp_codegen_subtract(L_22, 1)));
				int32_t L_23 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_23, 1));
			}

IL_0076_1:
			{
				int32_t L_24 = V_3;
				int32_t L_25 = V_0;
				if ((((int32_t)L_24) < ((int32_t)L_25)))
				{
					goto IL_0035_1;
				}
			}
			{
				goto IL_008a;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008a:
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_26 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		AnimationDataSet_2_RemoveAll_m8F6D49F18326DD002D7085CFD37E996836D47827(L_26, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0095:
	{
		AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* L_27 = (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23*)(&__this->___completed);
		int32_t L_28 = L_27->___count;
		V_1 = L_28;
		V_6 = 0;
		goto IL_00d0;
	}

IL_00a6:
	{
		AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* L_29 = (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23*)(&__this->___completed);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_30 = L_29->___elements;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_33, NULL);
		RuntimeObject* L_35 = L_34;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker0< int32_t >::Invoke(24, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_35);
		V_5 = L_36;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		InterfaceActionInvoker1< int32_t >::Invoke(25, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_35, ((int32_t)il2cpp_codegen_subtract(L_37, 1)));
		int32_t L_38 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00d0:
	{
		int32_t L_39 = V_6;
		int32_t L_40 = V_1;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_00a6;
		}
	}
	{
		AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* L_41 = (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23*)(&__this->___completed);
		AnimationDataSet_2_RemoveAll_m37308DF9D331F7D9483F49E9221B50FF02999395(L_41, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		return;
	}
}
// Method Definition Index: 19164
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_CancelAllAnimations_m88BF23787274C36178345D3830CBC2DF09D9C52C_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_0 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		int32_t L_1 = L_0->___count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_3 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_4 = L_3->___elements;
		NullCheck(L_4);
		int32_t L_5 = 0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_6, NULL);
		NullCheck(L_7);
		EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* L_8;
		L_8 = InterfaceFuncInvoker0< EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* >::Invoke(1, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, L_7);
		EventDispatcherGate__ctor_mF02241D3AB4F068E3F0493D2E407C344C66810A9((&V_2), L_8, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0087:
			{
				EventDispatcherGate_Dispose_m55EF7949617C12B917FF0374D4F140F2054CE9C5((&V_2), NULL);
				return;
			}
		});
		try
		{
			{
				V_3 = 0;
				goto IL_0081_1;
			}

IL_0035_1:
			{
				AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_9 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
				VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_10 = L_9->___elements;
				int32_t L_11 = V_3;
				NullCheck(L_10);
				int32_t L_12 = L_11;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_14 = ___0_ve;
				if ((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_13) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_14))))
				{
					goto IL_007d_1;
				}
			}
			{
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = ___0_ve;
				int32_t L_16 = V_3;
				double L_17 = __this->___m_CurrentTime;
				Values_1_SendTransitionCancelEvent_mA30382EBAD93B4C6A84F78ACB1F17724012235EB(__this, L_15, L_16, L_17, NULL);
				int32_t L_18 = V_3;
				Values_1_ForceComputedStyleEndValue_mE1D23011959E4D84B2E371692FF38DC0789962E8(__this, L_18, NULL);
				AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_19 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
				VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_20 = L_19->___elements;
				int32_t L_21 = V_3;
				NullCheck(L_20);
				int32_t L_22 = L_21;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
				NullCheck(L_23);
				RuntimeObject* L_24;
				L_24 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_23, NULL);
				RuntimeObject* L_25 = L_24;
				NullCheck(L_25);
				int32_t L_26;
				L_26 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_25);
				V_4 = L_26;
				int32_t L_27 = V_4;
				NullCheck(L_25);
				InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_25, ((int32_t)il2cpp_codegen_subtract(L_27, 1)));
			}

IL_007d_1:
			{
				int32_t L_28 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
			}

IL_0081_1:
			{
				int32_t L_29 = V_3;
				int32_t L_30 = V_0;
				if ((((int32_t)L_29) < ((int32_t)L_30)))
				{
					goto IL_0035_1;
				}
			}
			{
				goto IL_0095;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0095:
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_31 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_32 = ___0_ve;
		AnimationDataSet_2_RemoveAll_m4A717E7EAF3AFA6020EA761371A55A95FB911B87(L_31, L_32, NULL);
		AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* L_33 = (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23*)(&__this->___completed);
		int32_t L_34 = L_33->___count;
		V_1 = L_34;
		V_5 = 0;
		goto IL_00ed;
	}

IL_00b2:
	{
		AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* L_35 = (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23*)(&__this->___completed);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_36 = L_35->___elements;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_40 = ___0_ve;
		if ((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_39) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_40))))
		{
			goto IL_00e7;
		}
	}
	{
		AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* L_41 = (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23*)(&__this->___completed);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_42 = L_41->___elements;
		int32_t L_43 = V_5;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_45, NULL);
		RuntimeObject* L_47 = L_46;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = InterfaceFuncInvoker0< int32_t >::Invoke(24, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_47);
		V_4 = L_48;
		int32_t L_49 = V_4;
		NullCheck(L_47);
		InterfaceActionInvoker1< int32_t >::Invoke(25, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_47, ((int32_t)il2cpp_codegen_subtract(L_49, 1)));
	}

IL_00e7:
	{
		int32_t L_50 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00ed:
	{
		int32_t L_51 = V_5;
		int32_t L_52 = V_1;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_00b2;
		}
	}
	{
		AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* L_53 = (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_54 = ___0_ve;
		AnimationDataSet_2_RemoveAll_mD0243DBFC2A00AF96889112ACF6B0A5BBAE3D680(L_53, L_54, NULL);
		return;
	}
}
// Method Definition Index: 19165
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_CancelAnimation_m901EA3E2DF91D5AC8BE85C3BC021EEBF339F6B1D_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_0 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_ve;
		int32_t L_2 = ___1_id;
		bool L_3;
		L_3 = AnimationDataSet_2_IndexOf_m426579E3950B9D06630F78C3592195372381B80F(L_0, L_1, L_2, (&V_0), NULL);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = ___0_ve;
		int32_t L_5 = V_0;
		double L_6 = __this->___m_CurrentTime;
		Values_1_QueueTransitionCancelEvent_mC76207505D12EC59FE24D569E0C4977671A702A1(__this, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		int32_t L_7 = V_0;
		Values_1_ForceComputedStyleEndValue_mE1D23011959E4D84B2E371692FF38DC0789962E8(__this, L_7, NULL);
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_8 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		int32_t L_9 = V_0;
		AnimationDataSet_2_Remove_m0CC33F6F7FBB55034896C5826F7FBC9247D8DFEE(L_8, L_9, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_10 = ___0_ve;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_10, NULL);
		RuntimeObject* L_12 = L_11;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_12);
		V_2 = L_13;
		int32_t L_14 = V_2;
		NullCheck(L_12);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_12, ((int32_t)il2cpp_codegen_subtract(L_14, 1)));
	}

IL_0047:
	{
		AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* L_15 = (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_16 = ___0_ve;
		int32_t L_17 = ___1_id;
		bool L_18;
		L_18 = AnimationDataSet_2_IndexOf_mF2A16E06AE574B25B870907948E93EF40AFD7A10(L_15, L_16, L_17, (&V_1), NULL);
		if (!L_18)
		{
			goto IL_0079;
		}
	}
	{
		AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* L_19 = (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23*)(&__this->___completed);
		int32_t L_20 = V_1;
		AnimationDataSet_2_Remove_mBD0D5CCF6AE3BC40F63E502AE2530BAFE0101530(L_19, L_20, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_21 = ___0_ve;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_21, NULL);
		RuntimeObject* L_23 = L_22;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(24, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_23);
		V_2 = L_24;
		int32_t L_25 = V_2;
		NullCheck(L_23);
		InterfaceActionInvoker1< int32_t >::Invoke(25, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_23, ((int32_t)il2cpp_codegen_subtract(L_25, 1)));
	}

IL_0079:
	{
		return;
	}
}
// Method Definition Index: 19166
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_UpdateAnimation_m5F7B348111F53050E71108AB783C01FE9445680E_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_id, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_0 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_ve;
		int32_t L_2 = ___1_id;
		bool L_3;
		L_3 = AnimationDataSet_2_IndexOf_m426579E3950B9D06630F78C3592195372381B80F(L_0, L_1, L_2, (&V_0), NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_4 = V_0;
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker1< int32_t >::Invoke(12, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this, L_4);
	}

IL_0018:
	{
		return;
	}
}
// Method Definition Index: 19167
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_GetAllAnimations_m29760D5D3F191CAD35C4420B08B50841786FA72F_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* ___1_outPropertyIds, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_0 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_ve;
		List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* L_2 = ___1_outPropertyIds;
		AnimationDataSet_2_GetActivePropertiesForElement_m3BF16AE3122B30FB9A54751867BD637AFE549689(L_0, L_1, L_2, NULL);
		AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* L_3 = (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = ___0_ve;
		List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* L_5 = ___1_outPropertyIds;
		AnimationDataSet_2_GetActivePropertiesForElement_mBADCAFF26135CE1D2783CD917BCFF536C3894071(L_3, L_4, L_5, NULL);
		return;
	}
}
// Method Definition Index: 19168
// Method Definition Index: 19169
// Method Definition Index: 19170
// Method Definition Index: 19171
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Values_1_StartTransition_m9FF80F80CD927F904CF25E2EDC96A0F1CFA32D4D_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, Il2CppSharedGenericObject* ___2_startValue, Il2CppSharedGenericObject* ___3_endValue, float ___4_duration, float ___5_delay, Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___6_easingCurve, double ___7_currentTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	double V_0 = 0.0;
	TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70 V_1;
	memset((&V_1), 0, sizeof(V_1));
	StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70 V_6;
	memset((&V_6), 0, sizeof(V_6));
	StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	{
		double L_0 = ___7_currentTime;
		float L_1 = ___5_delay;
		double L_2 = (il2cpp_codegen_conv<double,float,float,false,false>(L_1,NULL));
		V_0 = ((double)il2cpp_codegen_add(L_0, L_2));
		il2cpp_codegen_initobj((&V_6), sizeof(TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70));
		double L_3 = V_0;
		(&V_6)->___startTime = L_3;
		float L_4 = ___4_duration;
		(&V_6)->___duration = L_4;
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_5 = ___6_easingCurve;
		(&V_6)->___easingCurve = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_6)->___easingCurve), (void*)L_5);
		(&V_6)->___reversingShorteningFactor = (1.0f);
		float L_6 = ___5_delay;
		(&V_6)->___delay = L_6;
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70 L_7 = V_6;
		V_1 = L_7;
		il2cpp_codegen_initobj((&V_7), sizeof(StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC));
		Il2CppSharedGenericObject* L_8 = ___2_startValue;
		Il2CppSharedGenericObject* L_9;
		L_9 = VirtualFuncInvoker1< Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(15, __this, L_8);
		(&V_7)->___startValue = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_7)->___startValue), (void*)L_9);
		Il2CppSharedGenericObject* L_10 = ___3_endValue;
		Il2CppSharedGenericObject* L_11;
		L_11 = VirtualFuncInvoker1< Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(15, __this, L_10);
		(&V_7)->___endValue = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_7)->___endValue), (void*)L_11);
		Il2CppSharedGenericObject* L_12 = ___2_startValue;
		Il2CppSharedGenericObject* L_13;
		L_13 = VirtualFuncInvoker1< Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(15, __this, L_12);
		(&V_7)->___currentValue = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_7)->___currentValue), (void*)L_13);
		Il2CppSharedGenericObject* L_14 = ___2_startValue;
		Il2CppSharedGenericObject* L_15;
		L_15 = VirtualFuncInvoker1< Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(15, __this, L_14);
		(&V_7)->___reversingAdjustedStartValue = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_7)->___reversingAdjustedStartValue), (void*)L_15);
		StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC L_16 = V_7;
		V_2 = L_16;
		float L_17 = ___4_duration;
		float L_18;
		L_18 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_17, NULL);
		float L_19 = ___5_delay;
		V_3 = ((float)il2cpp_codegen_add(L_18, L_19));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_20 = ___0_owner;
		int32_t L_21 = ___1_prop;
		Il2CppSharedGenericObject** L_22 = (Il2CppSharedGenericObject**)(&(&V_2)->___startValue);
		Il2CppSharedGenericObject** L_23 = (Il2CppSharedGenericObject**)(&(&V_2)->___endValue);
		bool L_24;
		L_24 = VirtualFuncInvoker4< bool, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, Il2CppSharedGenericObject**, Il2CppSharedGenericObject** >::Invoke(14, __this, L_20, L_21, L_22, L_23);
		if (L_24)
		{
			goto IL_00af;
		}
	}
	{
		return (bool)0;
	}

IL_00af:
	{
		AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* L_25 = (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_26 = ___0_owner;
		int32_t L_27 = ___1_prop;
		bool L_28;
		L_28 = AnimationDataSet_2_IndexOf_mF2A16E06AE574B25B870907948E93EF40AFD7A10(L_25, L_26, L_27, (&V_4), NULL);
		if (!L_28)
		{
			goto IL_0111;
		}
	}
	{
		Func_3_t77F22AB9767953FDC31A6CFFF00E1541826CCDD3* L_29;
		L_29 = VirtualFuncInvoker0< Func_3_t77F22AB9767953FDC31A6CFFF00E1541826CCDD3* >::Invoke(13, __this);
		Il2CppSharedGenericObject* L_30 = ___3_endValue;
		AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* L_31 = (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23*)(&__this->___completed);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_32 = L_31->___style;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Il2CppSharedGenericObject* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_29);
		bool L_36;
		L_36 = Func_3_Invoke_mF53D8E0776F9AABF2CE8F1DD56CEF19FDB4C1599_inline(L_29, L_30, L_35, NULL);
		if (!L_36)
		{
			goto IL_00e3;
		}
	}
	{
		return (bool)0;
	}

IL_00e3:
	{
		float L_37 = V_3;
		if ((!(((float)L_37) <= ((float)(0.0f)))))
		{
			goto IL_00ed;
		}
	}
	{
		return (bool)0;
	}

IL_00ed:
	{
		AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* L_38 = (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23*)(&__this->___completed);
		int32_t L_39 = V_4;
		AnimationDataSet_2_Remove_mBD0D5CCF6AE3BC40F63E502AE2530BAFE0101530(L_38, L_39, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_40 = ___0_owner;
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_40, NULL);
		RuntimeObject* L_42 = L_41;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = InterfaceFuncInvoker0< int32_t >::Invoke(24, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_42);
		V_8 = L_43;
		int32_t L_44 = V_8;
		NullCheck(L_42);
		InterfaceActionInvoker1< int32_t >::Invoke(25, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_42, ((int32_t)il2cpp_codegen_subtract(L_44, 1)));
	}

IL_0111:
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_45 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_46 = ___0_owner;
		int32_t L_47 = ___1_prop;
		bool L_48;
		L_48 = AnimationDataSet_2_IndexOf_m426579E3950B9D06630F78C3592195372381B80F(L_45, L_46, L_47, (&V_5), NULL);
		if (!L_48)
		{
			goto IL_0320;
		}
	}
	{
		Func_3_t77F22AB9767953FDC31A6CFFF00E1541826CCDD3* L_49;
		L_49 = VirtualFuncInvoker0< Func_3_t77F22AB9767953FDC31A6CFFF00E1541826CCDD3* >::Invoke(13, __this);
		Il2CppSharedGenericObject* L_50 = ___3_endValue;
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_51 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		StyleDataU5BU5D_tFFFE872CF2A20E675AE8CE5CA228C2D6B3272CF2* L_52 = L_51->___style;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		Il2CppSharedGenericObject* L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___endValue;
		NullCheck(L_49);
		bool L_55;
		L_55 = Func_3_Invoke_mF53D8E0776F9AABF2CE8F1DD56CEF19FDB4C1599_inline(L_49, L_50, L_54, NULL);
		if (!L_55)
		{
			goto IL_014d;
		}
	}
	{
		return (bool)0;
	}

IL_014d:
	{
		Func_3_t77F22AB9767953FDC31A6CFFF00E1541826CCDD3* L_56;
		L_56 = VirtualFuncInvoker0< Func_3_t77F22AB9767953FDC31A6CFFF00E1541826CCDD3* >::Invoke(13, __this);
		Il2CppSharedGenericObject* L_57 = ___3_endValue;
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_58 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		StyleDataU5BU5D_tFFFE872CF2A20E675AE8CE5CA228C2D6B3272CF2* L_59 = L_58->___style;
		int32_t L_60 = V_5;
		NullCheck(L_59);
		Il2CppSharedGenericObject* L_61 = ((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_60)))->___currentValue;
		NullCheck(L_56);
		bool L_62;
		L_62 = Func_3_Invoke_mF53D8E0776F9AABF2CE8F1DD56CEF19FDB4C1599_inline(L_56, L_57, L_61, NULL);
		if (!L_62)
		{
			goto IL_01a4;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_63 = ___0_owner;
		int32_t L_64 = V_5;
		double L_65 = ___7_currentTime;
		Values_1_QueueTransitionCancelEvent_mC76207505D12EC59FE24D569E0C4977671A702A1(__this, L_63, L_64, L_65, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_66 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		int32_t L_67 = V_5;
		AnimationDataSet_2_Remove_m0CC33F6F7FBB55034896C5826F7FBC9247D8DFEE(L_66, L_67, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_68 = ___0_owner;
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_68, NULL);
		RuntimeObject* L_70 = L_69;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_70);
		V_8 = L_71;
		int32_t L_72 = V_8;
		NullCheck(L_70);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_70, ((int32_t)il2cpp_codegen_subtract(L_72, 1)));
		return (bool)0;
	}

IL_01a4:
	{
		float L_73 = V_3;
		if ((!(((float)L_73) <= ((float)(0.0f)))))
		{
			goto IL_01dd;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_74 = ___0_owner;
		int32_t L_75 = V_5;
		double L_76 = ___7_currentTime;
		Values_1_QueueTransitionCancelEvent_mC76207505D12EC59FE24D569E0C4977671A702A1(__this, L_74, L_75, L_76, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_77 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		int32_t L_78 = V_5;
		AnimationDataSet_2_Remove_m0CC33F6F7FBB55034896C5826F7FBC9247D8DFEE(L_77, L_78, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_79 = ___0_owner;
		NullCheck(L_79);
		RuntimeObject* L_80;
		L_80 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_79, NULL);
		RuntimeObject* L_81 = L_80;
		NullCheck(L_81);
		int32_t L_82;
		L_82 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_81);
		V_8 = L_82;
		int32_t L_83 = V_8;
		NullCheck(L_81);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_81, ((int32_t)il2cpp_codegen_subtract(L_83, 1)));
		return (bool)0;
	}

IL_01dd:
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_84 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		StyleDataU5BU5D_tFFFE872CF2A20E675AE8CE5CA228C2D6B3272CF2* L_85 = L_84->___style;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		Il2CppSharedGenericObject* L_87 = ((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___currentValue;
		Il2CppSharedGenericObject* L_88;
		L_88 = VirtualFuncInvoker1< Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(15, __this, L_87);
		(&V_2)->___startValue = L_88;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___startValue), (void*)L_88);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_89 = ___0_owner;
		int32_t L_90 = ___1_prop;
		Il2CppSharedGenericObject** L_91 = (Il2CppSharedGenericObject**)(&(&V_2)->___startValue);
		Il2CppSharedGenericObject** L_92 = (Il2CppSharedGenericObject**)(&(&V_2)->___endValue);
		bool L_93;
		L_93 = VirtualFuncInvoker4< bool, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, Il2CppSharedGenericObject**, Il2CppSharedGenericObject** >::Invoke(14, __this, L_89, L_90, L_91, L_92);
		if (L_93)
		{
			goto IL_024a;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_94 = ___0_owner;
		int32_t L_95 = V_5;
		double L_96 = ___7_currentTime;
		Values_1_QueueTransitionCancelEvent_mC76207505D12EC59FE24D569E0C4977671A702A1(__this, L_94, L_95, L_96, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_97 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		int32_t L_98 = V_5;
		AnimationDataSet_2_Remove_m0CC33F6F7FBB55034896C5826F7FBC9247D8DFEE(L_97, L_98, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_99 = ___0_owner;
		NullCheck(L_99);
		RuntimeObject* L_100;
		L_100 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_99, NULL);
		RuntimeObject* L_101 = L_100;
		NullCheck(L_101);
		int32_t L_102;
		L_102 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_101);
		V_8 = L_102;
		int32_t L_103 = V_8;
		NullCheck(L_101);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_101, ((int32_t)il2cpp_codegen_subtract(L_103, 1)));
		return (bool)0;
	}

IL_024a:
	{
		StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC L_104 = V_2;
		Il2CppSharedGenericObject* L_105 = L_104.___startValue;
		Il2CppSharedGenericObject* L_106;
		L_106 = VirtualFuncInvoker1< Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(15, __this, L_105);
		(&V_2)->___currentValue = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___currentValue), (void*)L_106);
		Func_3_t77F22AB9767953FDC31A6CFFF00E1541826CCDD3* L_107;
		L_107 = VirtualFuncInvoker0< Func_3_t77F22AB9767953FDC31A6CFFF00E1541826CCDD3* >::Invoke(13, __this);
		Il2CppSharedGenericObject* L_108 = ___3_endValue;
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_109 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		StyleDataU5BU5D_tFFFE872CF2A20E675AE8CE5CA228C2D6B3272CF2* L_110 = L_109->___style;
		int32_t L_111 = V_5;
		NullCheck(L_110);
		Il2CppSharedGenericObject* L_112 = ((L_110)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_111)))->___reversingAdjustedStartValue;
		NullCheck(L_107);
		bool L_113;
		L_113 = Func_3_Invoke_mF53D8E0776F9AABF2CE8F1DD56CEF19FDB4C1599_inline(L_107, L_108, L_112, NULL);
		if (!L_113)
		{
			goto IL_02e3;
		}
	}
	{
		int32_t L_114 = V_5;
		float L_115;
		L_115 = Values_1_ComputeReversingShorteningFactor_m63659F49588A1FFFBBC96B85AA4F5016B174DDC6(__this, L_114, NULL);
		float L_116 = L_115;
		V_10 = L_116;
		(&V_1)->___reversingShorteningFactor = L_116;
		float L_117 = V_10;
		V_9 = L_117;
		double L_118 = ___7_currentTime;
		float L_119 = ___5_delay;
		float L_120 = V_9;
		float L_121;
		L_121 = Values_1_ComputeReversingDelay_m9CB25078EF223DDDFA2759EAB876C60770878104(__this, L_119, L_120, NULL);
		double L_122 = (il2cpp_codegen_conv<double,float,float,false,false>(L_121,NULL));
		(&V_1)->___startTime = ((double)il2cpp_codegen_add(L_118, L_122));
		float L_123 = ___4_duration;
		float L_124 = V_9;
		float L_125;
		L_125 = Values_1_ComputeReversingDuration_mBAD1B6CE0E73B9DFB65BF288287F8745B40078A2(__this, L_123, L_124, NULL);
		(&V_1)->___duration = L_125;
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_126 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		StyleDataU5BU5D_tFFFE872CF2A20E675AE8CE5CA228C2D6B3272CF2* L_127 = L_126->___style;
		int32_t L_128 = V_5;
		NullCheck(L_127);
		Il2CppSharedGenericObject* L_129 = ((L_127)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_128)))->___endValue;
		Il2CppSharedGenericObject* L_130;
		L_130 = VirtualFuncInvoker1< Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(15, __this, L_129);
		(&V_2)->___reversingAdjustedStartValue = L_130;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___reversingAdjustedStartValue), (void*)L_130);
	}

IL_02e3:
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_131 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		TimingDataU5BU5D_t4B3E0005A73C94EB00881FDF1758D709D04F4F79* L_132 = L_131->___timing;
		int32_t L_133 = V_5;
		NullCheck(L_132);
		((L_132)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_133)))->___isStarted = (bool)0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_134 = ___0_owner;
		int32_t L_135 = V_5;
		double L_136 = ___7_currentTime;
		Values_1_QueueTransitionCancelEvent_mC76207505D12EC59FE24D569E0C4977671A702A1(__this, L_134, L_135, L_136, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_137 = ___0_owner;
		int32_t L_138 = V_5;
		Values_1_QueueTransitionRunEvent_m805AD0DC53C530FC6A98BF36E647A576D8172EBB(__this, L_137, L_138, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_139 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		int32_t L_140 = V_5;
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70 L_141 = V_1;
		StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC L_142 = V_2;
		AnimationDataSet_2_Replace_mD29BA1CBACC9B5DBB6F115BC48E01FE99DA4BE6F(L_139, L_140, L_141, L_142, NULL);
		return (bool)1;
	}

IL_0320:
	{
		float L_143 = V_3;
		if ((!(((float)L_143) <= ((float)(0.0f)))))
		{
			goto IL_032a;
		}
	}
	{
		return (bool)0;
	}

IL_032a:
	{
		Func_3_t77F22AB9767953FDC31A6CFFF00E1541826CCDD3* L_144;
		L_144 = VirtualFuncInvoker0< Func_3_t77F22AB9767953FDC31A6CFFF00E1541826CCDD3* >::Invoke(13, __this);
		Il2CppSharedGenericObject* L_145 = ___2_startValue;
		Il2CppSharedGenericObject* L_146 = ___3_endValue;
		NullCheck(L_144);
		bool L_147;
		L_147 = Func_3_Invoke_mF53D8E0776F9AABF2CE8F1DD56CEF19FDB4C1599_inline(L_144, L_145, L_146, NULL);
		if (!L_147)
		{
			goto IL_033c;
		}
	}
	{
		return (bool)0;
	}

IL_033c:
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_148 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_149 = ___0_owner;
		int32_t L_150 = ___1_prop;
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70 L_151 = V_1;
		StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC L_152 = V_2;
		AnimationDataSet_2_Add_m12FF0C9DC5553483B7CE43FE43CD7543F5881A26(L_148, L_149, L_150, L_151, L_152, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_153 = ___0_owner;
		NullCheck(L_153);
		RuntimeObject* L_154;
		L_154 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_153, NULL);
		RuntimeObject* L_155 = L_154;
		NullCheck(L_155);
		int32_t L_156;
		L_156 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_155);
		V_8 = L_156;
		int32_t L_157 = V_8;
		NullCheck(L_155);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_155, ((int32_t)il2cpp_codegen_add(L_157, 1)));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_158 = ___0_owner;
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_159 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		int32_t L_160 = L_159->___count;
		Values_1_QueueTransitionRunEvent_m805AD0DC53C530FC6A98BF36E647A576D8172EBB(__this, L_158, ((int32_t)il2cpp_codegen_subtract(L_160, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		return (bool)1;
	}
}
// Method Definition Index: 19172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ForceComputedStyleEndValue_mE1D23011959E4D84B2E371692FF38DC0789962E8_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, int32_t ___0_runningIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_0 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		StyleDataU5BU5D_tFFFE872CF2A20E675AE8CE5CA228C2D6B3272CF2* L_1 = L_0->___style;
		int32_t L_2 = ___0_runningIndex;
		NullCheck(L_1);
		StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		Il2CppSharedGenericObject* L_4 = L_3->___endValue;
		L_3->___currentValue = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___currentValue), (void*)L_4);
		int32_t L_5 = ___0_runningIndex;
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker1< int32_t >::Invoke(12, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this, L_5);
		return;
	}
}
// Method Definition Index: 19173
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_Update_mE4EC7347A0B1876CEDF3456542B4949973A76989_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, double ___0_currentTime, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		double L_0 = ___0_currentTime;
		__this->___m_CurrentTime = L_0;
		double L_1 = ___0_currentTime;
		Values_1_UpdateProgress_mB914EEF269B1FD715DB2C14193CC9313FD9608C8(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker0::Invoke(10, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker0::Invoke(11, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_2 = __this->___m_NextFrameEventsState;
		NullCheck(L_2);
		bool L_3;
		L_3 = TransitionEventsFrameState_StateChanged_mDC31F81F938111410DB568ED809F4B1A1395600B(L_2, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Values_1_ProcessEventQueue_mC688A1B1B60920B9B08F5CF14E8B20ACD02D6323(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
	}

IL_002d:
	{
		return;
	}
}
// Method Definition Index: 19174
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ProcessEventQueue_mC688A1B1B60920B9B08F5CF14E8B20ACD02D6323_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* V_0 = NULL;
	EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D V_3;
	memset((&V_3), 0, sizeof(V_3));
	Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* V_4 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_5 = NULL;
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* V_6 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* G_B3_0 = NULL;
	{
		Values_1_SwapFrameStates_m7E4E49F32703E42158DEEC53F1BC3D208AC79A23(__this, NULL);
		TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_0 = __this->___m_CurrentFrameEventsState;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___panel;
		RuntimeObject* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0018;
		}
		G_B1_0 = L_2;
	}
	{
		G_B3_0 = ((EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398*)(NULL));
		goto IL_001d;
	}

IL_0018:
	{
		NullCheck(G_B2_0);
		EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* L_3;
		L_3 = InterfaceFuncInvoker0< EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* >::Invoke(1, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_3;
	}

IL_001d:
	{
		V_0 = G_B3_0;
		EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* L_4 = V_0;
		EventDispatcherGate__ctor_mF02241D3AB4F068E3F0493D2E407C344C66810A9((&V_1), L_4, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ab:
			{
				EventDispatcherGate_Dispose_m55EF7949617C12B917FF0374D4F140F2054CE9C5((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_5 = __this->___m_CurrentFrameEventsState;
				NullCheck(L_5);
				Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_6 = L_5->___elementPropertyQueuedEvents;
				NullCheck(L_6);
				Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A L_7;
				L_7 = Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD(L_6, NULL);
				V_2 = L_7;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0090_1:
					{
						Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172((&V_2), NULL);
						return;
					}
				});
				try
				{
					{
						goto IL_0085_2;
					}

IL_0039_2:
					{
						KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D L_8;
						L_8 = Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline((&V_2), NULL);
						V_3 = L_8;
						ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_9;
						L_9 = KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_inline((&V_3), NULL);
						Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_10;
						L_10 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_3), NULL);
						V_4 = L_10;
						ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_11;
						L_11 = KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_inline((&V_3), NULL);
						VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_12 = L_11.___element;
						V_5 = L_12;
						goto IL_007b_2;
					}

IL_0062_2:
					{
						Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_13 = V_4;
						NullCheck(L_13);
						EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_14;
						L_14 = Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D(L_13, Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var);
						V_6 = L_14;
						VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = V_5;
						EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_16 = V_6;
						NullCheck(L_15);
						VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(5, L_15, L_16);
						EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_17 = V_6;
						NullCheck(L_17);
						VirtualActionInvoker0::Invoke(15, L_17);
					}

IL_007b_2:
					{
						Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_18 = V_4;
						NullCheck(L_18);
						int32_t L_19;
						L_19 = Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_inline(L_18, NULL);
						if ((((int32_t)L_19) > ((int32_t)0)))
						{
							goto IL_0062_2;
						}
					}

IL_0085_2:
					{
						bool L_20;
						L_20 = Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140((&V_2), NULL);
						if (L_20)
						{
							goto IL_0039_2;
						}
					}
					{
						goto IL_009e_1;
					}
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_009e_1:
			{
				TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* L_21 = __this->___m_CurrentFrameEventsState;
				NullCheck(L_21);
				TransitionEventsFrameState_Clear_m2AB9551867D394B4143C9D17F0402E033865A26D(L_21, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// Method Definition Index: 19175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_UpdateProgress_mB914EEF269B1FD715DB2C14193CC9313FD9608C8_gshared (Values_1_t1C8184668BFAEAF200716BAA54E0AA8FE33251F9* __this, double ___0_currentTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* V_2 = NULL;
	double V_3 = 0.0;
	StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC* V_4 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** V_5 = NULL;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_0 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		int32_t L_1 = L_0->___count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0170;
		}
	}
	{
		V_1 = 0;
		goto IL_0169;
	}

IL_001a:
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_3 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		TimingDataU5BU5D_t4B3E0005A73C94EB00881FDF1758D709D04F4F79* L_4 = L_3->___timing;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		V_2 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)));
		double L_6 = ___0_currentTime;
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_7 = V_2;
		double L_8 = L_7->___startTime;
		if ((!(((double)L_6) < ((double)L_8))))
		{
			goto IL_0045;
		}
	}
	{
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_9 = V_2;
		L_9->___easedProgress = (0.0f);
		goto IL_0165;
	}

IL_0045:
	{
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_10 = V_2;
		double L_11 = L_10->___startTime;
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_12 = V_2;
		float L_13 = L_12->___duration;
		double L_14 = (il2cpp_codegen_conv<double,float,float,false,false>(L_13,NULL));
		V_3 = ((double)il2cpp_codegen_add(L_11, L_14));
		double L_15 = ___0_currentTime;
		double L_16 = V_3;
		if ((((double)L_15) >= ((double)L_16)))
		{
			goto IL_0069;
		}
	}
	{
		double L_17 = V_3;
		double L_18 = ___0_currentTime;
		if ((!(((double)((double)il2cpp_codegen_subtract(L_17, L_18))) < ((double)(0.0001)))))
		{
			goto IL_011d;
		}
	}

IL_0069:
	{
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_19 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		StyleDataU5BU5D_tFFFE872CF2A20E675AE8CE5CA228C2D6B3272CF2* L_20 = L_19->___style;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		V_4 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)));
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_22 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_23 = L_22->___elements;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		V_5 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)));
		StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC* L_25 = V_4;
		StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC* L_26 = V_4;
		Il2CppSharedGenericObject* L_27 = L_26->___endValue;
		L_25->___currentValue = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___currentValue), (void*)L_27);
		int32_t L_28 = V_1;
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker1< int32_t >::Invoke(12, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this, L_28);
		AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23* L_29 = (AnimationDataSet_2_tAA5AAEEACDF13419E260162968EEA3C2103AAB23*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** L_30 = V_5;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_31 = *(L_30);
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_32 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_33 = L_32->___properties;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (int32_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		EmptyData_t399475F01E0BC0B85E2FE88B9144B6DBDB94CFA5 L_37 = ((EmptyData_t399475F01E0BC0B85E2FE88B9144B6DBDB94CFA5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40)))->___Default;
		StyleData_t93FECE8AB7A1B10C1CD954E9C450D0804D8CFACC* L_38 = V_4;
		Il2CppSharedGenericObject* L_39 = L_38->___endValue;
		AnimationDataSet_2_Add_m382EBC5D46C51B2679221DF746DC5E79895706C6(L_29, L_31, L_36, L_37, L_39, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** L_40 = V_5;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_41 = *(L_40);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_41, NULL);
		RuntimeObject* L_43 = L_42;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_43);
		V_6 = L_44;
		int32_t L_45 = V_6;
		NullCheck(L_43);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_43, ((int32_t)il2cpp_codegen_subtract(L_45, 1)));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** L_46 = V_5;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_47 = *(L_46);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_47, NULL);
		RuntimeObject* L_49 = L_48;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = InterfaceFuncInvoker0< int32_t >::Invoke(24, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_49);
		V_6 = L_50;
		int32_t L_51 = V_6;
		NullCheck(L_49);
		InterfaceActionInvoker1< int32_t >::Invoke(25, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_49, ((int32_t)il2cpp_codegen_add(L_51, 1)));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** L_52 = V_5;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_53 = *(L_52);
		int32_t L_54 = V_1;
		Values_1_QueueTransitionEndEvent_m7349B90B2B73E98C56D9BFCBA82235D03CDA10D7(__this, L_53, L_54, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 42));
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_55 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		int32_t L_56 = V_1;
		AnimationDataSet_2_Remove_m0CC33F6F7FBB55034896C5826F7FBC9247D8DFEE(L_55, L_56, NULL);
		int32_t L_57 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
		int32_t L_58 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_58, 1));
		goto IL_0165;
	}

IL_011d:
	{
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_59 = V_2;
		bool L_60 = L_59->___isStarted;
		if (L_60)
		{
			goto IL_0140;
		}
	}
	{
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_61 = V_2;
		L_61->___isStarted = (bool)1;
		AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2* L_62 = (AnimationDataSet_2_tB0D339457F9FDBAF53822158B8D0C75EA71275E2*)(&__this->___running);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_63 = L_62->___elements;
		int32_t L_64 = V_1;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		int32_t L_67 = V_1;
		Values_1_QueueTransitionStartEvent_m63C415B7DC34ABED0487174284547D9F31B921D5(__this, L_66, L_67, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 43));
	}

IL_0140:
	{
		double L_68 = ___0_currentTime;
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_69 = V_2;
		double L_70 = L_69->___startTime;
		float L_71 = (il2cpp_codegen_conv<float,double,double,false,false>(((double)il2cpp_codegen_subtract(L_68, L_70)),NULL));
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_72 = V_2;
		float L_73 = L_72->___duration;
		V_7 = ((float)(L_71/L_73));
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_74 = V_2;
		TimingData_tD2FECFA5EA822E554DAEECC066CC21746B57EA70* L_75 = V_2;
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_76 = L_75->___easingCurve;
		float L_77 = V_7;
		NullCheck(L_76);
		float L_78;
		L_78 = Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_inline(L_76, L_77, NULL);
		L_74->___easedProgress = L_78;
	}

IL_0165:
	{
		int32_t L_79 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_0169:
	{
		int32_t L_80 = V_1;
		int32_t L_81 = V_0;
		if ((((int32_t)L_80) < ((int32_t)L_81)))
		{
			goto IL_001a;
		}
	}

IL_0170:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19150
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Values_1_get_isEmpty_m8B97AF1AAAA9217F2283C84B56BCE192AB925DA3_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_0 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_1 = L_0->___count;
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_2 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		int32_t L_3 = L_2->___count;
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_3))) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 19152
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Values_1_ConvertUnits_m71D818EE3FA8EF2424E70920DC596A7C2AB5E32E_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, Il2CppFullySharedGenericAny* ___2_a, Il2CppFullySharedGenericAny* ___3_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)1;
	}
}
// Method Definition Index: 19153
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_Copy_m146C8354AF8527BA0CA2182887AA7C7BEC0DA21A_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, Il2CppFullySharedGenericAny ___0_value, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_value : &___0_value), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		return;
	}
}
// Method Definition Index: 19154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1__ctor_mD777D1BABD541B17F98B1C9D94F87D9335E6AE8C_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_0 = (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		((  void (*) (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_0, NULL);
		__this->___m_CurrentFrameEventsState = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentFrameEventsState), (void*)L_0);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_1 = (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		((  void (*) (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_1, NULL);
		__this->___m_NextFrameEventsState = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NextFrameEventsState), (void*)L_1);
		Values__ctor_m154F5E2A0541CF4C0B1CD89FE135945542E64B72((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this, NULL);
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450 L_2;
		L_2 = ((  AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450 (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		__this->___running = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___elements), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___properties), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___timing), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___style), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___indices), (void*)NULL);
		#endif
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915 L_3;
		L_3 = ((  AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915 (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		__this->___completed = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___elements), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___properties), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___timing), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___style), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___indices), (void*)NULL);
		#endif
		__this->___m_CurrentTime = (0.0);
		return;
	}
}
// Method Definition Index: 19155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_SwapFrameStates_mD651E6B0F40BA3D9674C6ED1EE03D0DD4F1C531D_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* V_0 = NULL;
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_0 = __this->___m_CurrentFrameEventsState;
		V_0 = L_0;
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_1 = __this->___m_NextFrameEventsState;
		__this->___m_CurrentFrameEventsState = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentFrameEventsState), (void*)L_1);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_2 = V_0;
		__this->___m_NextFrameEventsState = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NextFrameEventsState), (void*)L_2);
		return;
	}
}
// Method Definition Index: 19156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueEvent_m9FA040AF7B261E15B8DA75E45FACC0EBBD39D304_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___1_epp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4D0C3095996E7B1D88B163C7DA308689CCA71337_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mC0C477097247ABAE611BD10D005CBADBED88FCAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(TransitionEventsFrameState_t32DCDE0EAFDCF0AA53BBA8A5C38455E40DC487ED_StaticInit);
	//<source_info:<no-source>:1>
	Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* V_0 = NULL;
	{
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_0 = ___0_evt;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_1 = ___1_epp;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2 = L_1.___element;
		NullCheck(L_0);
		EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline(L_0, L_2, NULL);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_3 = __this->___m_NextFrameEventsState;
		NullCheck(L_3);
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_4 = L_3->___elementPropertyQueuedEvents;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_5 = ___1_epp;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C(L_4, L_5, (&V_0), Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0039;
		}
	}
	{
		CHECKED_LOCAL_INIT(TransitionEventsFrameState_t32DCDE0EAFDCF0AA53BBA8A5C38455E40DC487ED_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_7;
		L_7 = ((  Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		V_0 = L_7;
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_8 = __this->___m_NextFrameEventsState;
		NullCheck(L_8);
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_9 = L_8->___elementPropertyQueuedEvents;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_10 = ___1_epp;
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_11 = V_0;
		NullCheck(L_9);
		Dictionary_2_Add_m4D0C3095996E7B1D88B163C7DA308689CCA71337(L_9, L_10, L_11, Dictionary_2_Add_m4D0C3095996E7B1D88B163C7DA308689CCA71337_RuntimeMethod_var);
	}

IL_0039:
	{
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_12 = V_0;
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_13 = ___0_evt;
		NullCheck(L_12);
		Queue_1_Enqueue_mC0C477097247ABAE611BD10D005CBADBED88FCAE(L_12, L_13, Queue_1_Enqueue_mC0C477097247ABAE611BD10D005CBADBED88FCAE_RuntimeMethod_var);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_14 = __this->___m_NextFrameEventsState;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___panel;
		if (L_15)
		{
			goto IL_0063;
		}
	}
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_16 = __this->___m_NextFrameEventsState;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_17 = ___1_epp;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18 = L_17.___element;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_18, NULL);
		NullCheck(L_16);
		L_16->___panel = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___panel), (void*)L_19);
	}

IL_0063:
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_20 = __this->___m_NextFrameEventsState;
		NullCheck(L_20);
		((  void (*) (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(L_20, NULL);
		return;
	}
}
// Method Definition Index: 19157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ClearEventQueue_m6F16D1CB7742D04CACD5FF4E433D8F809504F799_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_epp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* V_0 = NULL;
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_0 = __this->___m_NextFrameEventsState;
		NullCheck(L_0);
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_1 = L_0->___elementPropertyQueuedEvents;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_2 = ___0_epp;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		goto IL_002d;
	}

IL_0017:
	{
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_4 = V_0;
		NullCheck(L_4);
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_5;
		L_5 = Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D(L_4, Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var);
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(15, L_5);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_6 = __this->___m_NextFrameEventsState;
		NullCheck(L_6);
		((  void (*) (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)))(L_6, NULL);
	}

IL_002d:
	{
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_inline(L_7, NULL);
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0017;
		}
	}

IL_0036:
	{
		return;
	}
}
// Method Definition Index: 19158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionRunEvent_m1BC1E03F658E2B13210AAA244B2202596CD863EF_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_m5A4FB9CF00193D3079D46E507D66AB77C1F4A66A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* V_3 = NULL;
	float V_4 = 0.0f;
	TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF* V_5 = NULL;
	float G_B8_0 = 0.0f;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, ((int32_t)13), NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_2 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_3 = L_2->___properties;
		int32_t L_4 = ___1_runningIndex;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (int32_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = ___0_ve;
		int32_t L_8 = V_0;
		CHECKED_LOCAL_INIT(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticInit,(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9((&V_1), L_7, L_8, NULL);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_9 = __this->___m_NextFrameEventsState;
		NullCheck(L_9);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_10 = L_9->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805(L_10, L_11, (&V_2), Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_13 = __this->___m_NextFrameEventsState;
		NullCheck(L_13);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_14 = L_13->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_14);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_14, L_15, ((int32_t)((int32_t)L_16|1)), Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		goto IL_005f;
	}

IL_004d:
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_17 = __this->___m_NextFrameEventsState;
		NullCheck(L_17);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_18 = L_17->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_19 = V_1;
		NullCheck(L_18);
		Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4(L_18, L_19, 1, Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
	}

IL_005f:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_20 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* L_21 = L_20->___timing;
		int32_t L_22 = ___1_runningIndex;
		NullCheck(L_21);
		V_3 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)));
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_23 = V_3;
		float L_24 = L_23->___delay;
		if ((((float)L_24) < ((float)(0.0f))))
		{
			goto IL_0085;
		}
	}
	{
		G_B8_0 = (0.0f);
		goto IL_00a1;
	}

IL_0085:
	{
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_25 = V_3;
		float L_26 = L_25->___delay;
		float L_27;
		L_27 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((-L_26)), (0.0f), NULL);
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_28 = V_3;
		float L_29 = L_28->___duration;
		float L_30;
		L_30 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_27, L_29, NULL);
		G_B8_0 = L_30;
	}

IL_00a1:
	{
		V_4 = G_B8_0;
		int32_t L_31 = V_0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_32;
		memset((&L_32), 0, sizeof(L_32));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_32), L_31, NULL);
		float L_33 = V_4;
		double L_34 = (il2cpp_codegen_conv<double,float,float,false,false>(L_33,NULL));
		TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF* L_35;
		L_35 = TransitionEventBase_1_GetPooled_m5A4FB9CF00193D3079D46E507D66AB77C1F4A66A(L_32, L_34, TransitionEventBase_1_GetPooled_m5A4FB9CF00193D3079D46E507D66AB77C1F4A66A_RuntimeMethod_var);
		V_5 = L_35;
		TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF* L_36 = V_5;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_37 = V_1;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)))(__this, L_36, L_37, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		return;
	}
}
// Method Definition Index: 19159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionStartEvent_m13DED1EE00A2E44A5562462833ED642EEA94D128_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_mFD665DFD6C012691EA5BE90A0AF28D3BE715ED61_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* V_3 = NULL;
	float V_4 = 0.0f;
	TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF* V_5 = NULL;
	float G_B8_0 = 0.0f;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, ((int32_t)13), NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_2 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_3 = L_2->___properties;
		int32_t L_4 = ___1_runningIndex;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (int32_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = ___0_ve;
		int32_t L_8 = V_0;
		CHECKED_LOCAL_INIT(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticInit,(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9((&V_1), L_7, L_8, NULL);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_9 = __this->___m_NextFrameEventsState;
		NullCheck(L_9);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_10 = L_9->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805(L_10, L_11, (&V_2), Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_13 = __this->___m_NextFrameEventsState;
		NullCheck(L_13);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_14 = L_13->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_14);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_14, L_15, ((int32_t)((int32_t)L_16|2)), Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		goto IL_005f;
	}

IL_004d:
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_17 = __this->___m_NextFrameEventsState;
		NullCheck(L_17);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_18 = L_17->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_19 = V_1;
		NullCheck(L_18);
		Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4(L_18, L_19, 2, Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
	}

IL_005f:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_20 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* L_21 = L_20->___timing;
		int32_t L_22 = ___1_runningIndex;
		NullCheck(L_21);
		V_3 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)));
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_23 = V_3;
		float L_24 = L_23->___delay;
		if ((((float)L_24) < ((float)(0.0f))))
		{
			goto IL_0085;
		}
	}
	{
		G_B8_0 = (0.0f);
		goto IL_00a1;
	}

IL_0085:
	{
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_25 = V_3;
		float L_26 = L_25->___delay;
		float L_27;
		L_27 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((-L_26)), (0.0f), NULL);
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_28 = V_3;
		float L_29 = L_28->___duration;
		float L_30;
		L_30 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_27, L_29, NULL);
		G_B8_0 = L_30;
	}

IL_00a1:
	{
		V_4 = G_B8_0;
		int32_t L_31 = V_0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_32;
		memset((&L_32), 0, sizeof(L_32));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_32), L_31, NULL);
		float L_33 = V_4;
		double L_34 = (il2cpp_codegen_conv<double,float,float,false,false>(L_33,NULL));
		TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF* L_35;
		L_35 = TransitionEventBase_1_GetPooled_mFD665DFD6C012691EA5BE90A0AF28D3BE715ED61(L_32, L_34, TransitionEventBase_1_GetPooled_mFD665DFD6C012691EA5BE90A0AF28D3BE715ED61_RuntimeMethod_var);
		V_5 = L_35;
		TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF* L_36 = V_5;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_37 = V_1;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)))(__this, L_36, L_37, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		return;
	}
}
// Method Definition Index: 19160
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionEndEvent_m9244667615F61D9D2FE4EB56C5705B8CCDBAF801_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_m57317A5C89342419B0A31E8FBB622786C7C283CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* V_3 = NULL;
	TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD* V_4 = NULL;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, ((int32_t)13), NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_2 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_3 = L_2->___properties;
		int32_t L_4 = ___1_runningIndex;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (int32_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = ___0_ve;
		int32_t L_8 = V_0;
		CHECKED_LOCAL_INIT(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticInit,(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9((&V_1), L_7, L_8, NULL);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_9 = __this->___m_NextFrameEventsState;
		NullCheck(L_9);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_10 = L_9->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805(L_10, L_11, (&V_2), Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_13 = __this->___m_NextFrameEventsState;
		NullCheck(L_13);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_14 = L_13->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_14);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_14, L_15, ((int32_t)((int32_t)L_16|4)), Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		goto IL_005f;
	}

IL_004d:
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_17 = __this->___m_NextFrameEventsState;
		NullCheck(L_17);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_18 = L_17->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_19 = V_1;
		NullCheck(L_18);
		Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4(L_18, L_19, 4, Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
	}

IL_005f:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_20 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* L_21 = L_20->___timing;
		int32_t L_22 = ___1_runningIndex;
		NullCheck(L_21);
		V_3 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)));
		int32_t L_23 = V_0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_24;
		memset((&L_24), 0, sizeof(L_24));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_24), L_23, NULL);
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_25 = V_3;
		float L_26 = L_25->___duration;
		double L_27 = (il2cpp_codegen_conv<double,float,float,false,false>(L_26,NULL));
		TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD* L_28;
		L_28 = TransitionEventBase_1_GetPooled_m57317A5C89342419B0A31E8FBB622786C7C283CA(L_24, L_27, TransitionEventBase_1_GetPooled_m57317A5C89342419B0A31E8FBB622786C7C283CA_RuntimeMethod_var);
		V_4 = L_28;
		TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD* L_29 = V_4;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_30 = V_1;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)))(__this, L_29, L_30, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		return;
	}
}
// Method Definition Index: 19161
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionCancelEvent_m07E8376FB7B2F1CAF733688CD58394E8EAD687BE_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, double ___2_panelElapsed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* V_4 = NULL;
	double V_5 = 0.0;
	TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* V_6 = NULL;
	double G_B13_0 = 0.0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, ((int32_t)13), NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_2 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_3 = L_2->___properties;
		int32_t L_4 = ___1_runningIndex;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (int32_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = ___0_ve;
		int32_t L_8 = V_0;
		CHECKED_LOCAL_INIT(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticInit,(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9((&V_1), L_7, L_8, NULL);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_9 = __this->___m_NextFrameEventsState;
		NullCheck(L_9);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_10 = L_9->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805(L_10, L_11, (&V_3), Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_13 = V_3;
		if (!L_13)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_14 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)L_14&8))) == ((uint32_t)8))))
		{
			goto IL_005d;
		}
	}

IL_0040:
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_15 = __this->___m_NextFrameEventsState;
		NullCheck(L_15);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_16 = L_15->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_17 = V_1;
		NullCheck(L_16);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_16, L_17, 8, Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_18 = V_1;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(__this, L_18, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		V_2 = (bool)1;
		goto IL_008e;
	}

IL_005d:
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_19 = __this->___m_NextFrameEventsState;
		NullCheck(L_19);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_20 = L_19->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_21 = V_1;
		NullCheck(L_20);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_20, L_21, 0, Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_22 = V_1;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(__this, L_22, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		V_2 = (bool)0;
		goto IL_008e;
	}

IL_007a:
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_23 = __this->___m_NextFrameEventsState;
		NullCheck(L_23);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_24 = L_23->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_25 = V_1;
		NullCheck(L_24);
		Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4(L_24, L_25, 8, Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		V_2 = (bool)1;
	}

IL_008e:
	{
		bool L_26 = V_2;
		if (L_26)
		{
			goto IL_0092;
		}
	}
	{
		return;
	}

IL_0092:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_27 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* L_28 = L_27->___timing;
		int32_t L_29 = ___1_runningIndex;
		NullCheck(L_28);
		V_4 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)));
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_30 = V_4;
		bool L_31 = L_30->___isStarted;
		if (L_31)
		{
			goto IL_00b9;
		}
	}
	{
		G_B13_0 = (0.0);
		goto IL_00c2;
	}

IL_00b9:
	{
		double L_32 = ___2_panelElapsed;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_33 = V_4;
		double L_34 = L_33->___startTime;
		G_B13_0 = ((double)il2cpp_codegen_subtract(L_32, L_34));
	}

IL_00c2:
	{
		V_5 = G_B13_0;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_35 = V_4;
		float L_36 = L_35->___delay;
		if ((!(((float)L_36) < ((float)(0.0f)))))
		{
			goto IL_00e0;
		}
	}
	{
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_37 = V_4;
		float L_38 = L_37->___delay;
		double L_39 = (il2cpp_codegen_conv<double,float,float,false,false>(((-L_38)),NULL));
		double L_40 = V_5;
		V_5 = ((double)il2cpp_codegen_add(L_39, L_40));
	}

IL_00e0:
	{
		int32_t L_41 = V_0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_42;
		memset((&L_42), 0, sizeof(L_42));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_42), L_41, NULL);
		double L_43 = V_5;
		TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_44;
		L_44 = TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5(L_42, L_43, TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5_RuntimeMethod_var);
		V_6 = L_44;
		TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_45 = V_6;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_46 = V_1;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)))(__this, L_45, L_46, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		return;
	}
}
// Method Definition Index: 19162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_SendTransitionCancelEvent_m358CB250222E4E6C199C8A265246024812EF8469_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, double ___2_panelElapsed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_StaticInit);
	//<source_info:<no-source>:1>
	TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* V_0 = NULL;
	double V_1 = 0.0;
	TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* V_2 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	double G_B5_0 = 0.0;
	int32_t G_B5_1 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B6_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		CHECKED_LOCAL_INIT(EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_StaticInit,(EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1 = ((EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_StaticFields*)il2cpp_codegen_static_fields_for(EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_il2cpp_TypeInfo_var))->___EventCategory;
		NullCheck(L_0);
		bool L_2;
		L_2 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_3 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* L_4 = L_3->___timing;
		int32_t L_5 = ___1_runningIndex;
		NullCheck(L_4);
		V_0 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)));
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_6 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_7 = L_6->___properties;
		int32_t L_8 = ___1_runningIndex;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (int32_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_11 = V_0;
		bool L_12 = L_11->___isStarted;
		if (L_12)
		{
			G_B4_0 = L_10;
			goto IL_0040;
		}
		G_B3_0 = L_10;
	}
	{
		G_B5_0 = (0.0);
		G_B5_1 = G_B3_0;
		goto IL_0048;
	}

IL_0040:
	{
		double L_13 = ___2_panelElapsed;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_14 = V_0;
		double L_15 = L_14->___startTime;
		G_B5_0 = ((double)il2cpp_codegen_subtract(L_13, L_15));
		G_B5_1 = G_B4_0;
	}

IL_0048:
	{
		V_1 = G_B5_0;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_16 = V_0;
		float L_17 = L_16->___delay;
		if ((!(((float)L_17) < ((float)(0.0f)))))
		{
			G_B7_0 = G_B5_1;
			goto IL_0061;
		}
		G_B6_0 = G_B5_1;
	}
	{
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_18 = V_0;
		float L_19 = L_18->___delay;
		double L_20 = (il2cpp_codegen_conv<double,float,float,false,false>(((-L_19)),NULL));
		double L_21 = V_1;
		V_1 = ((double)il2cpp_codegen_add(L_20, L_21));
		G_B7_0 = G_B6_0;
	}

IL_0061:
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_22;
		memset((&L_22), 0, sizeof(L_22));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_22), G_B7_0, NULL);
		double L_23 = V_1;
		TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_24;
		L_24 = TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5(L_22, L_23, TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5_RuntimeMethod_var);
		V_2 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{
				{
					TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_25 = V_2;
					if (!L_25)
					{
						goto IL_0086;
					}
				}
				{
					TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_26 = V_2;
					NullCheck(L_26);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_26);
				}

IL_0086:
				{
					return;
				}
			}
		});
		try
		{
			TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_27 = V_2;
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_28 = ___0_ve;
			NullCheck(L_27);
			EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline(L_27, L_28, NULL);
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_29 = ___0_ve;
			TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_30 = V_2;
			NullCheck(L_29);
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(5, L_29, L_30);
			goto IL_0087;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		return;
	}
}
// Method Definition Index: 19163
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_CancelAllAnimations_m4F588337FED8433604BC5C843C8EA4E70925105C_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_0 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_1 = L_0->___count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_3 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_4 = L_3->___elements;
		NullCheck(L_4);
		int32_t L_5 = 0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_6, NULL);
		NullCheck(L_7);
		EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* L_8;
		L_8 = InterfaceFuncInvoker0< EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* >::Invoke(1, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, L_7);
		EventDispatcherGate__ctor_mF02241D3AB4F068E3F0493D2E407C344C66810A9((&V_2), L_8, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007c:
			{
				EventDispatcherGate_Dispose_m55EF7949617C12B917FF0374D4F140F2054CE9C5((&V_2), NULL);
				return;
			}
		});
		try
		{
			{
				V_3 = 0;
				goto IL_0076_1;
			}

IL_0035_1:
			{
				AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_9 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
				VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_10 = L_9->___elements;
				int32_t L_11 = V_3;
				NullCheck(L_10);
				int32_t L_12 = L_11;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
				V_4 = L_13;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_14 = V_4;
				int32_t L_15 = V_3;
				double L_16 = __this->___m_CurrentTime;
				((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, double, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))(__this, L_14, L_15, L_16, NULL);
				int32_t L_17 = V_3;
				((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))(__this, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18 = V_4;
				NullCheck(L_18);
				RuntimeObject* L_19;
				L_19 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_18, NULL);
				RuntimeObject* L_20 = L_19;
				NullCheck(L_20);
				int32_t L_21;
				L_21 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_20);
				V_5 = L_21;
				int32_t L_22 = V_5;
				NullCheck(L_20);
				InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_20, ((int32_t)il2cpp_codegen_subtract(L_22, 1)));
				int32_t L_23 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_23, 1));
			}

IL_0076_1:
			{
				int32_t L_24 = V_3;
				int32_t L_25 = V_0;
				if ((((int32_t)L_24) < ((int32_t)L_25)))
				{
					goto IL_0035_1;
				}
			}
			{
				goto IL_008a;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008a:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_26 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		((  void (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(L_26, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0095:
	{
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_27 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		int32_t L_28 = L_27->___count;
		V_1 = L_28;
		V_6 = 0;
		goto IL_00d0;
	}

IL_00a6:
	{
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_29 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_30 = L_29->___elements;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_33, NULL);
		RuntimeObject* L_35 = L_34;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker0< int32_t >::Invoke(24, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_35);
		V_5 = L_36;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		InterfaceActionInvoker1< int32_t >::Invoke(25, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_35, ((int32_t)il2cpp_codegen_subtract(L_37, 1)));
		int32_t L_38 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00d0:
	{
		int32_t L_39 = V_6;
		int32_t L_40 = V_1;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_00a6;
		}
	}
	{
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_41 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		((  void (*) (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)))(L_41, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		return;
	}
}
// Method Definition Index: 19164
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_CancelAllAnimations_m87452CC68DE1CB014A2CA07A0004B34CF00913BA_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_0 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_1 = L_0->___count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_3 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_4 = L_3->___elements;
		NullCheck(L_4);
		int32_t L_5 = 0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_6, NULL);
		NullCheck(L_7);
		EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* L_8;
		L_8 = InterfaceFuncInvoker0< EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* >::Invoke(1, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, L_7);
		EventDispatcherGate__ctor_mF02241D3AB4F068E3F0493D2E407C344C66810A9((&V_2), L_8, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0087:
			{
				EventDispatcherGate_Dispose_m55EF7949617C12B917FF0374D4F140F2054CE9C5((&V_2), NULL);
				return;
			}
		});
		try
		{
			{
				V_3 = 0;
				goto IL_0081_1;
			}

IL_0035_1:
			{
				AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_9 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
				VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_10 = L_9->___elements;
				int32_t L_11 = V_3;
				NullCheck(L_10);
				int32_t L_12 = L_11;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_14 = ___0_ve;
				if ((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_13) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_14))))
				{
					goto IL_007d_1;
				}
			}
			{
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = ___0_ve;
				int32_t L_16 = V_3;
				double L_17 = __this->___m_CurrentTime;
				((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, double, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))(__this, L_15, L_16, L_17, NULL);
				int32_t L_18 = V_3;
				((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))(__this, L_18, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
				AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_19 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
				VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_20 = L_19->___elements;
				int32_t L_21 = V_3;
				NullCheck(L_20);
				int32_t L_22 = L_21;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
				NullCheck(L_23);
				RuntimeObject* L_24;
				L_24 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_23, NULL);
				RuntimeObject* L_25 = L_24;
				NullCheck(L_25);
				int32_t L_26;
				L_26 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_25);
				V_4 = L_26;
				int32_t L_27 = V_4;
				NullCheck(L_25);
				InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_25, ((int32_t)il2cpp_codegen_subtract(L_27, 1)));
			}

IL_007d_1:
			{
				int32_t L_28 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
			}

IL_0081_1:
			{
				int32_t L_29 = V_3;
				int32_t L_30 = V_0;
				if ((((int32_t)L_29) < ((int32_t)L_30)))
				{
					goto IL_0035_1;
				}
			}
			{
				goto IL_0095;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0095:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_31 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_32 = ___0_ve;
		((  void (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)))(L_31, L_32, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_33 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		int32_t L_34 = L_33->___count;
		V_1 = L_34;
		V_5 = 0;
		goto IL_00ed;
	}

IL_00b2:
	{
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_35 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_36 = L_35->___elements;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_40 = ___0_ve;
		if ((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_39) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_40))))
		{
			goto IL_00e7;
		}
	}
	{
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_41 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_42 = L_41->___elements;
		int32_t L_43 = V_5;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_45, NULL);
		RuntimeObject* L_47 = L_46;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = InterfaceFuncInvoker0< int32_t >::Invoke(24, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_47);
		V_4 = L_48;
		int32_t L_49 = V_4;
		NullCheck(L_47);
		InterfaceActionInvoker1< int32_t >::Invoke(25, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_47, ((int32_t)il2cpp_codegen_subtract(L_49, 1)));
	}

IL_00e7:
	{
		int32_t L_50 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00ed:
	{
		int32_t L_51 = V_5;
		int32_t L_52 = V_1;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_00b2;
		}
	}
	{
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_53 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_54 = ___0_ve;
		((  void (*) (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))(L_53, L_54, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
// Method Definition Index: 19165
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_CancelAnimation_mB6BA300D262E9CD6C6D2D4113177D16A57B0274E_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_0 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_ve;
		int32_t L_2 = ___1_id;
		bool L_3;
		L_3 = ((  bool (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)))(L_0, L_1, L_2, (&V_0), NULL);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = ___0_ve;
		int32_t L_5 = V_0;
		double L_6 = __this->___m_CurrentTime;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, double, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)))(__this, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		int32_t L_7 = V_0;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))(__this, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_8 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_9 = V_0;
		((  void (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)))(L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_10 = ___0_ve;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_10, NULL);
		RuntimeObject* L_12 = L_11;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_12);
		V_2 = L_13;
		int32_t L_14 = V_2;
		NullCheck(L_12);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_12, ((int32_t)il2cpp_codegen_subtract(L_14, 1)));
	}

IL_0047:
	{
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_15 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_16 = ___0_ve;
		int32_t L_17 = ___1_id;
		bool L_18;
		L_18 = ((  bool (*) (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(L_15, L_16, L_17, (&V_1), NULL);
		if (!L_18)
		{
			goto IL_0079;
		}
	}
	{
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_19 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		int32_t L_20 = V_1;
		((  void (*) (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)))(L_19, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_21 = ___0_ve;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_21, NULL);
		RuntimeObject* L_23 = L_22;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(24, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_23);
		V_2 = L_24;
		int32_t L_25 = V_2;
		NullCheck(L_23);
		InterfaceActionInvoker1< int32_t >::Invoke(25, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_23, ((int32_t)il2cpp_codegen_subtract(L_25, 1)));
	}

IL_0079:
	{
		return;
	}
}
// Method Definition Index: 19166
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_UpdateAnimation_m3840EC35B9754270CF35510170282BA5B95A9352_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_id, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_0 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_ve;
		int32_t L_2 = ___1_id;
		bool L_3;
		L_3 = ((  bool (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)))(L_0, L_1, L_2, (&V_0), NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_4 = V_0;
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker1< int32_t >::Invoke(12, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this, L_4);
	}

IL_0018:
	{
		return;
	}
}
// Method Definition Index: 19167
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_GetAllAnimations_m2952CB649160EF4C06A01160B9833F4462122CF6_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* ___1_outPropertyIds, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_0 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_ve;
		List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* L_2 = ___1_outPropertyIds;
		((  void (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)))(L_0, L_1, L_2, NULL);
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_3 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = ___0_ve;
		List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* L_5 = ___1_outPropertyIds;
		((  void (*) (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22)))(L_3, L_4, L_5, NULL);
		return;
	}
}
// Method Definition Index: 19168
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Values_1_ComputeReversingShorteningFactor_m3DDD463A0FCDE2463723B6ACCFD6E62F314B257E_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, int32_t ___0_oldIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* V_0 = NULL;
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_0 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* L_1 = L_0->___timing;
		int32_t L_2 = ___0_oldIndex;
		NullCheck(L_1);
		V_0 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_3 = V_0;
		float L_4 = L_3->___easedProgress;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_5 = V_0;
		float L_6 = L_5->___reversingShorteningFactor;
		float L_7;
		L_7 = fabsf(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_4)), L_6)))));
		float L_8;
		L_8 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 19169
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Values_1_ComputeReversingDuration_m5A95E4F12F2A3EEF5F16B5F6B23D936299F82048_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, float ___0_newTransitionDuration, float ___1_newReversingShorteningFactor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = ___0_newTransitionDuration;
		float L_1 = ___1_newReversingShorteningFactor;
		return ((float)il2cpp_codegen_multiply(L_0, L_1));
	}
}
// Method Definition Index: 19170
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Values_1_ComputeReversingDelay_mF3433FDACD867828A82413E8C14164F64090E5A6_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, float ___0_delay, float ___1_newReversingShorteningFactor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = ___0_delay;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_000a;
		}
	}
	{
		float L_1 = ___0_delay;
		return L_1;
	}

IL_000a:
	{
		float L_2 = ___0_delay;
		float L_3 = ___1_newReversingShorteningFactor;
		return ((float)il2cpp_codegen_multiply(L_2, L_3));
	}
}
// Method Definition Index: 19171
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Values_1_StartTransition_m5A34968FAE9AEDD4116F2F916FB59731C759B6FB_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, Il2CppFullySharedGenericAny ___2_startValue, Il2CppFullySharedGenericAny ___3_endValue, float ___4_duration, float ___5_delay, Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___6_easingCurve, double ___7_currentTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
	const uint32_t SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	const Il2CppFullySharedGenericAny L_28 = L_8;
	const Il2CppFullySharedGenericAny L_48 = L_8;
	const Il2CppFullySharedGenericAny L_55 = L_8;
	const Il2CppFullySharedGenericAny L_85 = L_8;
	const Il2CppFullySharedGenericAny L_101 = L_8;
	const Il2CppFullySharedGenericAny L_125 = L_8;
	const Il2CppFullySharedGenericAny L_141 = L_8;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	const Il2CppFullySharedGenericAny L_33 = L_9;
	const Il2CppFullySharedGenericAny L_52 = L_9;
	const Il2CppFullySharedGenericAny L_59 = L_9;
	const Il2CppFullySharedGenericAny L_86 = L_9;
	const Il2CppFullySharedGenericAny L_102 = L_9;
	const Il2CppFullySharedGenericAny L_126 = L_9;
	const Il2CppFullySharedGenericAny L_142 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	const Il2CppFullySharedGenericAny L_104 = L_10;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	const Il2CppFullySharedGenericAny L_108 = L_11;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	const StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D L_16 = alloca(SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
	const StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D L_100 = L_16;
	const StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D L_138 = L_16;
	const StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D L_148 = L_16;
	//<source_info:<no-source>:1>
	double V_0 = 0.0;
	TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C V_1;
	memset((&V_1), 0, sizeof(V_1));
	StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D V_2 = alloca(SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
	memset(V_2, 0, SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C V_6;
	memset((&V_6), 0, sizeof(V_6));
	StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D V_7 = alloca(SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
	memset(V_7, 0, SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	{
		double L_0 = ___7_currentTime;
		float L_1 = ___5_delay;
		double L_2 = (il2cpp_codegen_conv<double,float,float,false,false>(L_1,NULL));
		V_0 = ((double)il2cpp_codegen_add(L_0, L_2));
		il2cpp_codegen_initobj((&V_6), sizeof(TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C));
		double L_3 = V_0;
		(&V_6)->___startTime = L_3;
		float L_4 = ___4_duration;
		(&V_6)->___duration = L_4;
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_5 = ___6_easingCurve;
		(&V_6)->___easingCurve = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_6)->___easingCurve), (void*)L_5);
		(&V_6)->___reversingShorteningFactor = (1.0f);
		float L_6 = ___5_delay;
		(&V_6)->___delay = L_6;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C L_7 = V_6;
		V_1 = L_7;
		il2cpp_codegen_initobj((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_7, SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___2_startValue : &___2_startValue), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(15, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_8: *(void**)L_8), (Il2CppFullySharedGenericAny*)L_9);
		il2cpp_codegen_write_field_data<true>((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_7, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 24), L_9, SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___3_endValue : &___3_endValue), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(15, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_10: *(void**)L_10), (Il2CppFullySharedGenericAny*)L_11);
		il2cpp_codegen_write_field_data<true>((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_7, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 25), L_11, SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___2_startValue : &___2_startValue), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(15, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_12: *(void**)L_12), (Il2CppFullySharedGenericAny*)L_13);
		il2cpp_codegen_write_field_data<true>((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_7, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 26), L_13, SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___2_startValue : &___2_startValue), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(15, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_14: *(void**)L_14), (Il2CppFullySharedGenericAny*)L_15);
		il2cpp_codegen_write_field_data<true>((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_7, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 27), L_15, SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_memcpy(L_16, V_7, SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
		il2cpp_codegen_memcpy(V_2, L_16, SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
		float L_17 = ___4_duration;
		float L_18;
		L_18 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_17, NULL);
		float L_19 = ___5_delay;
		V_3 = ((float)il2cpp_codegen_add(L_18, L_19));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_20 = ___0_owner;
		int32_t L_21 = ___1_prop;
		bool L_22;
		L_22 = VirtualFuncInvoker4< bool, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(14, __this, L_20, L_21, (((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_2, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 24)))), (((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_2, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 25)))));
		if (L_22)
		{
			goto IL_00af;
		}
	}
	{
		return (bool)0;
	}

IL_00af:
	{
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_23 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_24 = ___0_owner;
		int32_t L_25 = ___1_prop;
		bool L_26;
		L_26 = ((  bool (*) (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(L_23, L_24, L_25, (&V_4), NULL);
		if (!L_26)
		{
			goto IL_0111;
		}
	}
	{
		Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* L_27;
		L_27 = VirtualFuncInvoker0< Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* >::Invoke(13, __this);
		il2cpp_codegen_memcpy(L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___3_endValue : &___3_endValue), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_29 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_30 = L_29->___style;
		int32_t L_31 = V_4;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		il2cpp_codegen_memcpy(L_33, (L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		NullCheck(L_27);
		bool L_34;
		L_34 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28), L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_28: *(void**)L_28), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_33: *(void**)L_33));
		if (!L_34)
		{
			goto IL_00e3;
		}
	}
	{
		return (bool)0;
	}

IL_00e3:
	{
		float L_35 = V_3;
		if ((!(((float)L_35) <= ((float)(0.0f)))))
		{
			goto IL_00ed;
		}
	}
	{
		return (bool)0;
	}

IL_00ed:
	{
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_36 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		int32_t L_37 = V_4;
		((  void (*) (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)))(L_36, L_37, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_38 = ___0_owner;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_38, NULL);
		RuntimeObject* L_40 = L_39;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = InterfaceFuncInvoker0< int32_t >::Invoke(24, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_40);
		V_8 = L_41;
		int32_t L_42 = V_8;
		NullCheck(L_40);
		InterfaceActionInvoker1< int32_t >::Invoke(25, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_40, ((int32_t)il2cpp_codegen_subtract(L_42, 1)));
	}

IL_0111:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_43 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_44 = ___0_owner;
		int32_t L_45 = ___1_prop;
		bool L_46;
		L_46 = ((  bool (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)))(L_43, L_44, L_45, (&V_5), NULL);
		if (!L_46)
		{
			goto IL_0320;
		}
	}
	{
		Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* L_47;
		L_47 = VirtualFuncInvoker0< Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* >::Invoke(13, __this);
		il2cpp_codegen_memcpy(L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___3_endValue : &___3_endValue), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_49 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A* L_50 = L_49->___style;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		il2cpp_codegen_memcpy(L_52, il2cpp_codegen_get_field_data_pointer(((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)(L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 25)), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		NullCheck(L_47);
		bool L_53;
		L_53 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28), L_47, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_48: *(void**)L_48), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_52: *(void**)L_52));
		if (!L_53)
		{
			goto IL_014d;
		}
	}
	{
		return (bool)0;
	}

IL_014d:
	{
		Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* L_54;
		L_54 = VirtualFuncInvoker0< Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* >::Invoke(13, __this);
		il2cpp_codegen_memcpy(L_55, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___3_endValue : &___3_endValue), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_56 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A* L_57 = L_56->___style;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		il2cpp_codegen_memcpy(L_59, il2cpp_codegen_get_field_data_pointer(((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)(L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 26)), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		NullCheck(L_54);
		bool L_60;
		L_60 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28), L_54, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_55: *(void**)L_55), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_59: *(void**)L_59));
		if (!L_60)
		{
			goto IL_01a4;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_61 = ___0_owner;
		int32_t L_62 = V_5;
		double L_63 = ___7_currentTime;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, double, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)))(__this, L_61, L_62, L_63, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_64 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_65 = V_5;
		((  void (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)))(L_64, L_65, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_66 = ___0_owner;
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_66, NULL);
		RuntimeObject* L_68 = L_67;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_68);
		V_8 = L_69;
		int32_t L_70 = V_8;
		NullCheck(L_68);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_68, ((int32_t)il2cpp_codegen_subtract(L_70, 1)));
		return (bool)0;
	}

IL_01a4:
	{
		float L_71 = V_3;
		if ((!(((float)L_71) <= ((float)(0.0f)))))
		{
			goto IL_01dd;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_72 = ___0_owner;
		int32_t L_73 = V_5;
		double L_74 = ___7_currentTime;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, double, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)))(__this, L_72, L_73, L_74, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_75 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_76 = V_5;
		((  void (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)))(L_75, L_76, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_77 = ___0_owner;
		NullCheck(L_77);
		RuntimeObject* L_78;
		L_78 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_77, NULL);
		RuntimeObject* L_79 = L_78;
		NullCheck(L_79);
		int32_t L_80;
		L_80 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_79);
		V_8 = L_80;
		int32_t L_81 = V_8;
		NullCheck(L_79);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_79, ((int32_t)il2cpp_codegen_subtract(L_81, 1)));
		return (bool)0;
	}

IL_01dd:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_82 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A* L_83 = L_82->___style;
		int32_t L_84 = V_5;
		NullCheck(L_83);
		il2cpp_codegen_memcpy(L_85, il2cpp_codegen_get_field_data_pointer(((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)(L_83)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_84))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 26)), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(15, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_85: *(void**)L_85), (Il2CppFullySharedGenericAny*)L_86);
		il2cpp_codegen_write_field_data<true>((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_2, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 24), L_86, SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_87 = ___0_owner;
		int32_t L_88 = ___1_prop;
		bool L_89;
		L_89 = VirtualFuncInvoker4< bool, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(14, __this, L_87, L_88, (((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_2, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 24)))), (((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_2, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 25)))));
		if (L_89)
		{
			goto IL_024a;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_90 = ___0_owner;
		int32_t L_91 = V_5;
		double L_92 = ___7_currentTime;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, double, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)))(__this, L_90, L_91, L_92, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_93 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_94 = V_5;
		((  void (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)))(L_93, L_94, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_95 = ___0_owner;
		NullCheck(L_95);
		RuntimeObject* L_96;
		L_96 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_95, NULL);
		RuntimeObject* L_97 = L_96;
		NullCheck(L_97);
		int32_t L_98;
		L_98 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_97);
		V_8 = L_98;
		int32_t L_99 = V_8;
		NullCheck(L_97);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_97, ((int32_t)il2cpp_codegen_subtract(L_99, 1)));
		return (bool)0;
	}

IL_024a:
	{
		il2cpp_codegen_memcpy(L_100, V_2, SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
		il2cpp_codegen_memcpy(L_101, il2cpp_codegen_get_field_data_pointer(L_100, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 24)), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(15, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_101: *(void**)L_101), (Il2CppFullySharedGenericAny*)L_102);
		il2cpp_codegen_write_field_data<true>((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_2, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 26), L_102, SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* L_103;
		L_103 = VirtualFuncInvoker0< Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* >::Invoke(13, __this);
		il2cpp_codegen_memcpy(L_104, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___3_endValue : &___3_endValue), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_105 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A* L_106 = L_105->___style;
		int32_t L_107 = V_5;
		NullCheck(L_106);
		il2cpp_codegen_memcpy(L_108, il2cpp_codegen_get_field_data_pointer(((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)(L_106)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_107))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 27)), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		NullCheck(L_103);
		bool L_109;
		L_109 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28), L_103, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_104: *(void**)L_104), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_108: *(void**)L_108));
		if (!L_109)
		{
			goto IL_02e3;
		}
	}
	{
		int32_t L_110 = V_5;
		float L_111;
		L_111 = ((  float (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29)))(__this, L_110, NULL);
		float L_112 = L_111;
		V_10 = L_112;
		(&V_1)->___reversingShorteningFactor = L_112;
		float L_113 = V_10;
		V_9 = L_113;
		double L_114 = ___7_currentTime;
		float L_115 = ___5_delay;
		float L_116 = V_9;
		float L_117;
		L_117 = ((  float (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, float, float, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30)))(__this, L_115, L_116, NULL);
		double L_118 = (il2cpp_codegen_conv<double,float,float,false,false>(L_117,NULL));
		(&V_1)->___startTime = ((double)il2cpp_codegen_add(L_114, L_118));
		float L_119 = ___4_duration;
		float L_120 = V_9;
		float L_121;
		L_121 = ((  float (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, float, float, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 31)))(__this, L_119, L_120, NULL);
		(&V_1)->___duration = L_121;
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_122 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A* L_123 = L_122->___style;
		int32_t L_124 = V_5;
		NullCheck(L_123);
		il2cpp_codegen_memcpy(L_125, il2cpp_codegen_get_field_data_pointer(((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)(L_123)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_124))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 25)), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(15, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_125: *(void**)L_125), (Il2CppFullySharedGenericAny*)L_126);
		il2cpp_codegen_write_field_data<true>((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_2, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 27), L_126, SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	}

IL_02e3:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_127 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* L_128 = L_127->___timing;
		int32_t L_129 = V_5;
		NullCheck(L_128);
		((L_128)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_129)))->___isStarted = (bool)0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_130 = ___0_owner;
		int32_t L_131 = V_5;
		double L_132 = ___7_currentTime;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, double, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)))(__this, L_130, L_131, L_132, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_133 = ___0_owner;
		int32_t L_134 = V_5;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32)))(__this, L_133, L_134, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_135 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_136 = V_5;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C L_137 = V_1;
		il2cpp_codegen_memcpy(L_138, V_2, SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
		InvokerActionInvoker3< int32_t, TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C, StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33), L_135, L_136, L_137, L_138);
		return (bool)1;
	}

IL_0320:
	{
		float L_139 = V_3;
		if ((!(((float)L_139) <= ((float)(0.0f)))))
		{
			goto IL_032a;
		}
	}
	{
		return (bool)0;
	}

IL_032a:
	{
		Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* L_140;
		L_140 = VirtualFuncInvoker0< Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* >::Invoke(13, __this);
		il2cpp_codegen_memcpy(L_141, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___2_startValue : &___2_startValue), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_memcpy(L_142, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___3_endValue : &___3_endValue), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		NullCheck(L_140);
		bool L_143;
		L_143 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28), L_140, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_141: *(void**)L_141), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_142: *(void**)L_142));
		if (!L_143)
		{
			goto IL_033c;
		}
	}
	{
		return (bool)0;
	}

IL_033c:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_144 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_145 = ___0_owner;
		int32_t L_146 = ___1_prop;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C L_147 = V_1;
		il2cpp_codegen_memcpy(L_148, V_2, SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
		InvokerActionInvoker4< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C, StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34), L_144, L_145, L_146, L_147, L_148);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_149 = ___0_owner;
		NullCheck(L_149);
		RuntimeObject* L_150;
		L_150 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_149, NULL);
		RuntimeObject* L_151 = L_150;
		NullCheck(L_151);
		int32_t L_152;
		L_152 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_151);
		V_8 = L_152;
		int32_t L_153 = V_8;
		NullCheck(L_151);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_151, ((int32_t)il2cpp_codegen_add(L_153, 1)));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_154 = ___0_owner;
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_155 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_156 = L_155->___count;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32)))(__this, L_154, ((int32_t)il2cpp_codegen_subtract(L_156, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		return (bool)1;
	}
}
// Method Definition Index: 19172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ForceComputedStyleEndValue_m96E662F6BB72D988E4BF4F6E412A53D9527B6B95_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, int32_t ___0_runningIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	//<source_info:<no-source>:1>
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_0 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A* L_1 = L_0->___style;
		int32_t L_2 = ___0_runningIndex;
		NullCheck(L_1);
		StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D* L_3 = ((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)(L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_field_data_pointer(L_3, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 25)), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_write_field_data<true>(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 26), L_4, SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		int32_t L_5 = ___0_runningIndex;
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker1< int32_t >::Invoke(12, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this, L_5);
		return;
	}
}
// Method Definition Index: 19173
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_Update_m551C4D3859B79EE01AB878A2040891575EA7448B_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, double ___0_currentTime, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		double L_0 = ___0_currentTime;
		__this->___m_CurrentTime = L_0;
		double L_1 = ___0_currentTime;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, double, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35)))(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker0::Invoke(10, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker0::Invoke(11, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_2 = __this->___m_NextFrameEventsState;
		NullCheck(L_2);
		bool L_3;
		L_3 = ((  bool (*) (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36)))(L_2, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
	}

IL_002d:
	{
		return;
	}
}
// Method Definition Index: 19174
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ProcessEventQueue_m21346B7FC69BBBFE0F969F4822065FADBA020232_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* V_0 = NULL;
	EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D V_3;
	memset((&V_3), 0, sizeof(V_3));
	Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* V_4 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_5 = NULL;
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* V_6 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* G_B3_0 = NULL;
	{
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38)))(__this, NULL);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_0 = __this->___m_CurrentFrameEventsState;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___panel;
		RuntimeObject* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0018;
		}
		G_B1_0 = L_2;
	}
	{
		G_B3_0 = ((EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398*)(NULL));
		goto IL_001d;
	}

IL_0018:
	{
		NullCheck(G_B2_0);
		EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* L_3;
		L_3 = InterfaceFuncInvoker0< EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* >::Invoke(1, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_3;
	}

IL_001d:
	{
		V_0 = G_B3_0;
		EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* L_4 = V_0;
		EventDispatcherGate__ctor_mF02241D3AB4F068E3F0493D2E407C344C66810A9((&V_1), L_4, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ab:
			{
				EventDispatcherGate_Dispose_m55EF7949617C12B917FF0374D4F140F2054CE9C5((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_5 = __this->___m_CurrentFrameEventsState;
				NullCheck(L_5);
				Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_6 = L_5->___elementPropertyQueuedEvents;
				NullCheck(L_6);
				Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A L_7;
				L_7 = Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD(L_6, NULL);
				V_2 = L_7;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0090_1:
					{
						Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172((&V_2), NULL);
						return;
					}
				});
				try
				{
					{
						goto IL_0085_2;
					}

IL_0039_2:
					{
						KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D L_8;
						L_8 = Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline((&V_2), NULL);
						V_3 = L_8;
						ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_9;
						L_9 = KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_inline((&V_3), NULL);
						Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_10;
						L_10 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_3), NULL);
						V_4 = L_10;
						ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_11;
						L_11 = KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_inline((&V_3), NULL);
						VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_12 = L_11.___element;
						V_5 = L_12;
						goto IL_007b_2;
					}

IL_0062_2:
					{
						Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_13 = V_4;
						NullCheck(L_13);
						EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_14;
						L_14 = Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D(L_13, Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var);
						V_6 = L_14;
						VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = V_5;
						EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_16 = V_6;
						NullCheck(L_15);
						VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(5, L_15, L_16);
						EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_17 = V_6;
						NullCheck(L_17);
						VirtualActionInvoker0::Invoke(15, L_17);
					}

IL_007b_2:
					{
						Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_18 = V_4;
						NullCheck(L_18);
						int32_t L_19;
						L_19 = Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_inline(L_18, NULL);
						if ((((int32_t)L_19) > ((int32_t)0)))
						{
							goto IL_0062_2;
						}
					}

IL_0085_2:
					{
						bool L_20;
						L_20 = Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140((&V_2), NULL);
						if (L_20)
						{
							goto IL_0039_2;
						}
					}
					{
						goto IL_009e_1;
					}
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_009e_1:
			{
				TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_21 = __this->___m_CurrentFrameEventsState;
				NullCheck(L_21);
				((  void (*) (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39)))(L_21, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// Method Definition Index: 19175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_UpdateProgress_m254B0438DABD1755B057A9D86933397E0B3A0906_fshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, double ___0_currentTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	const Il2CppFullySharedGenericAny L_39 = alloca(SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* V_2 = NULL;
	double V_3 = 0.0;
	StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D* V_4 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** V_5 = NULL;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_0 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_1 = L_0->___count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0170;
		}
	}
	{
		V_1 = 0;
		goto IL_0169;
	}

IL_001a:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_3 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* L_4 = L_3->___timing;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		V_2 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)));
		double L_6 = ___0_currentTime;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_7 = V_2;
		double L_8 = L_7->___startTime;
		if ((!(((double)L_6) < ((double)L_8))))
		{
			goto IL_0045;
		}
	}
	{
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_9 = V_2;
		L_9->___easedProgress = (0.0f);
		goto IL_0165;
	}

IL_0045:
	{
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_10 = V_2;
		double L_11 = L_10->___startTime;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_12 = V_2;
		float L_13 = L_12->___duration;
		double L_14 = (il2cpp_codegen_conv<double,float,float,false,false>(L_13,NULL));
		V_3 = ((double)il2cpp_codegen_add(L_11, L_14));
		double L_15 = ___0_currentTime;
		double L_16 = V_3;
		if ((((double)L_15) >= ((double)L_16)))
		{
			goto IL_0069;
		}
	}
	{
		double L_17 = V_3;
		double L_18 = ___0_currentTime;
		if ((!(((double)((double)il2cpp_codegen_subtract(L_17, L_18))) < ((double)(0.0001)))))
		{
			goto IL_011d;
		}
	}

IL_0069:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_19 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A* L_20 = L_19->___style;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		V_4 = ((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)(L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)));
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_22 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_23 = L_22->___elements;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		V_5 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)));
		StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D* L_25 = V_4;
		StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D* L_26 = V_4;
		il2cpp_codegen_memcpy(L_27, il2cpp_codegen_get_field_data_pointer(L_26, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 25)), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_write_field_data<true>(L_25, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 26), L_27, SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		int32_t L_28 = V_1;
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker1< int32_t >::Invoke(12, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this, L_28);
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_29 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** L_30 = V_5;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_31 = *(L_30);
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_32 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_33 = L_32->___properties;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (int32_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		EmptyData_t526DD646BCFBCA8323FA31D30623117D128D1E4B L_37 = ((EmptyData_t526DD646BCFBCA8323FA31D30623117D128D1E4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40)))->___Default;
		StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D* L_38 = V_4;
		il2cpp_codegen_memcpy(L_39, il2cpp_codegen_get_field_data_pointer(L_38, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 25)), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		InvokerActionInvoker4< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, EmptyData_t526DD646BCFBCA8323FA31D30623117D128D1E4B, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41), L_29, L_31, L_36, L_37, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_39: *(void**)L_39));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** L_40 = V_5;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_41 = *(L_40);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_41, NULL);
		RuntimeObject* L_43 = L_42;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_43);
		V_6 = L_44;
		int32_t L_45 = V_6;
		NullCheck(L_43);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_43, ((int32_t)il2cpp_codegen_subtract(L_45, 1)));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** L_46 = V_5;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_47 = *(L_46);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_47, NULL);
		RuntimeObject* L_49 = L_48;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = InterfaceFuncInvoker0< int32_t >::Invoke(24, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_49);
		V_6 = L_50;
		int32_t L_51 = V_6;
		NullCheck(L_49);
		InterfaceActionInvoker1< int32_t >::Invoke(25, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_49, ((int32_t)il2cpp_codegen_add(L_51, 1)));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** L_52 = V_5;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_53 = *(L_52);
		int32_t L_54 = V_1;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 42)))(__this, L_53, L_54, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 42));
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_55 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_56 = V_1;
		((  void (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)))(L_55, L_56, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		int32_t L_57 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
		int32_t L_58 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_58, 1));
		goto IL_0165;
	}

IL_011d:
	{
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_59 = V_2;
		bool L_60 = L_59->___isStarted;
		if (L_60)
		{
			goto IL_0140;
		}
	}
	{
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_61 = V_2;
		L_61->___isStarted = (bool)1;
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_62 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_63 = L_62->___elements;
		int32_t L_64 = V_1;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		int32_t L_67 = V_1;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 43)))(__this, L_66, L_67, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 43));
	}

IL_0140:
	{
		double L_68 = ___0_currentTime;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_69 = V_2;
		double L_70 = L_69->___startTime;
		float L_71 = (il2cpp_codegen_conv<float,double,double,false,false>(((double)il2cpp_codegen_subtract(L_68, L_70)),NULL));
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_72 = V_2;
		float L_73 = L_72->___duration;
		V_7 = ((float)(L_71/L_73));
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_74 = V_2;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_75 = V_2;
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_76 = L_75->___easingCurve;
		float L_77 = V_7;
		NullCheck(L_76);
		float L_78;
		L_78 = Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_inline(L_76, L_77, NULL);
		L_74->___easedProgress = L_78;
	}

IL_0165:
	{
		int32_t L_79 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_0169:
	{
		int32_t L_80 = V_1;
		int32_t L_81 = V_0;
		if ((((int32_t)L_80) < ((int32_t)L_81)))
		{
			goto IL_001a;
		}
	}

IL_0170:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 38306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorField_1__ctor_m8F08DF879EDA1A7B020FEA890F1CBC10AB6232D7 (VectorField_1_tA0DD3460E58AEABD9D5B33110FC64F4490179B87* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__this->___incStep = (0.0250000004f);
		__this->___incStepMult = (10.0f);
		__this->___decimals = 3;
		Field_1__ctor_m7C303BA68691F2521E9EC689B23AE797B4DFBB05(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 38306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorField_1__ctor_m68A8E7C0642A1F49BB638A5059411FDDFB21E070 (VectorField_1_t922D9F74763B4AFD1C1760DE2236972042F8310D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__this->___incStep = (0.0250000004f);
		__this->___incStepMult = (10.0f);
		__this->___decimals = 3;
		Field_1__ctor_m5E85360C971446C73E1A8E5ED7DA17D7EDC90E1B(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 38306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorField_1__ctor_mA147DDFF53B038A9BAC6EAEEBE45ED829C91DB95 (VectorField_1_t7640EEE30580F0D8ABCA05DBBAB2F6B83A4713C3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__this->___incStep = (0.0250000004f);
		__this->___incStepMult = (10.0f);
		__this->___decimals = 3;
		Field_1__ctor_m987712BF4E8BBF11473DA83B4CF70877C002430C(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 38306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorField_1__ctor_m8C9A6BE32F096BDD676D758F25D7747CBABBA6BE_fshared (VectorField_1_tA0B76D2246CE6687E43856049B2DB46975532D1F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__this->___incStep = (0.0250000004f);
		__this->___incStepMult = (10.0f);
		__this->___decimals = 3;
		((  void (*) (Field_1_tEBDBEF6C7E8EC7F1DBE1ABC4B1EA917269E20258*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))((Field_1_tEBDBEF6C7E8EC7F1DBE1ABC4B1EA917269E20258*)__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 9149
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_count;
		return L_0;
	}
}
// Method Definition Index: 9150
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_get_Zero_mDB2680DF070B1C7F273400548848C621F96343A4 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_zero;
		return L_0;
	}
}
// Method Definition Index: 9151
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	VectorSizeHelper_tC26CEAD1B0D88F765A24D653A74900C4C7FEBD18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B5_0 = 0;
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* L_0 = (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)(&(&V_0)->____placeholder);
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_1 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&L_0->___register);
		uint8_t* L_2 = (uint8_t*)(&L_1->___byte_0);
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		V_1 = (uint8_t*)L_3;
		uint8_t* L_4 = (uint8_t*)(&(&V_0)->____byte);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_4,NULL));
		uint8_t* L_6 = V_1;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,uint8_t*,intptr_t,false,false>(((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_5, (intptr_t)L_6))/1)),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(L_7,NULL));
		V_2 = (-1);
		G_B2_0 = L_8;
		goto IL_0045;
	}

IL_0045:
	{
		G_B4_0 = G_B2_0;
		goto IL_0067;
	}

IL_0067:
	{
		G_B5_0 = G_B4_0;
	}
	{
		V_2 = 2;
		G_B21_0 = G_B5_0;
		goto IL_0176;
	}

IL_0176:
	{
		int32_t L_9 = V_2;
		return ((int32_t)(G_B21_0/L_9));
	}
}
// Method Definition Index: 9152
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int8_t* V_3 = NULL;
	int8_t* V_4 = NULL;
	int32_t V_5 = 0;
	uint16_t* V_6 = NULL;
	uint16_t* V_7 = NULL;
	int32_t V_8 = 0;
	int16_t* V_9 = NULL;
	int16_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint32_t* V_12 = NULL;
	uint32_t* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t* V_15 = NULL;
	int32_t* V_16 = NULL;
	int32_t V_17 = 0;
	uint64_t* V_18 = NULL;
	uint64_t* V_19 = NULL;
	int32_t V_20 = 0;
	int64_t* V_21 = NULL;
	int64_t* V_22 = NULL;
	int32_t V_23 = 0;
	float* V_24 = NULL;
	float* V_25 = NULL;
	int32_t V_26 = 0;
	double* V_27 = NULL;
	double* V_28 = NULL;
	int32_t V_29 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489));
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0386;
		}
	}
	{
		goto IL_005e;
	}

IL_005e:
	{
		goto IL_00b3;
	}

IL_00b3:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_1 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_2 = (uint16_t*)(&L_1->___uint16_0);
		V_7 = L_2;
		uint16_t* L_3 = V_7;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,uint16_t*,intptr_t,false,false>(L_3,NULL));
		V_6 = (uint16_t*)L_4;
		V_8 = 0;
		goto IL_00ff;
	}

IL_00e5:
	{
		uint16_t* L_5 = V_6;
		int32_t L_6 = V_8;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		uint16_t L_8 = ___0_value;
		*(((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 2)))))) = ((int16_t)L_8);
		int32_t L_9 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_00ff:
	{
		int32_t L_10 = V_8;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_00e5;
		}
	}
	{
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_7 = (uint16_t*)L_12;
		return;
	}

IL_0386:
	{
		goto IL_0505;
	}

IL_0505:
	{
		goto IL_0684;
	}

IL_0684:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_13 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_14 = ___0_value;
		L_13->___uint16_0 = L_14;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_15 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_16 = ___0_value;
		L_15->___uint16_1 = L_16;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_17 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_18 = ___0_value;
		L_17->___uint16_2 = L_18;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_19 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_20 = ___0_value;
		L_19->___uint16_3 = L_20;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_21 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_22 = ___0_value;
		L_21->___uint16_4 = L_22;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_23 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_24 = ___0_value;
		L_23->___uint16_5 = L_24;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_25 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_26 = ___0_value;
		L_25->___uint16_6 = L_26;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_27 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_28 = ___0_value;
		L_27->___uint16_7 = L_28;
		return;
	}
}
// Method Definition Index: 9153
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_dataPointer;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359(__this, L_0, 0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		return;
	}
}
// Method Definition Index: 9154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	int8_t* V_4 = NULL;
	int8_t* V_5 = NULL;
	int8_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint16_t* V_8 = NULL;
	uint16_t* V_9 = NULL;
	uint16_t* V_10 = NULL;
	int32_t V_11 = 0;
	int16_t* V_12 = NULL;
	int16_t* V_13 = NULL;
	int16_t* V_14 = NULL;
	int32_t V_15 = 0;
	uint32_t* V_16 = NULL;
	uint32_t* V_17 = NULL;
	uint32_t* V_18 = NULL;
	int32_t V_19 = 0;
	int32_t* V_20 = NULL;
	int32_t* V_21 = NULL;
	int32_t* V_22 = NULL;
	int32_t V_23 = 0;
	uint64_t* V_24 = NULL;
	uint64_t* V_25 = NULL;
	uint64_t* V_26 = NULL;
	int32_t V_27 = 0;
	int64_t* V_28 = NULL;
	int64_t* V_29 = NULL;
	int64_t* V_30 = NULL;
	int32_t V_31 = 0;
	float* V_32 = NULL;
	float* V_33 = NULL;
	float* V_34 = NULL;
	int32_t V_35 = 0;
	double* V_36 = NULL;
	double* V_37 = NULL;
	double* V_38 = NULL;
	int32_t V_39 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489));
		goto IL_0053;
	}

IL_0053:
	{
		goto IL_00ae;
	}

IL_00ae:
	{
	}
	{
		void* L_0 = ___0_dataPointer;
		V_8 = (uint16_t*)L_0;
		uint16_t* L_1 = V_8;
		int32_t L_2 = ___1_offset;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		V_8 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, 2))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_4 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_5 = (uint16_t*)(&L_4->___uint16_0);
		V_10 = L_5;
		uint16_t* L_6 = V_10;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint16_t*,intptr_t,false,false>(L_6,NULL));
		V_9 = (uint16_t*)L_7;
		V_11 = 0;
		goto IL_0104;
	}

IL_00ec:
	{
		uint16_t* L_8 = V_9;
		int32_t L_9 = V_11;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		uint16_t* L_11 = V_8;
		int32_t L_12 = V_11;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = ((int32_t)*(((uint16_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 2))))));
		*(((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 2)))))) = ((int16_t)L_14);
		int32_t L_15 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0104:
	{
		int32_t L_16 = V_11;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_17;
		L_17 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_00ec;
		}
	}
	{
		uintptr_t L_18 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_10 = (uint16_t*)L_18;
		return;
	}
}
// Method Definition Index: 9155
// Method Definition Index: 9156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	int8_t* V_1 = NULL;
	uint16_t* V_2 = NULL;
	int16_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	uint64_t* V_6 = NULL;
	int64_t* V_7 = NULL;
	float* V_8 = NULL;
	double* V_9 = NULL;
	{
		int32_t L_0 = ___0_index;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_2 = ___0_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}

IL_000c:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491788442E76F5D7830F0DBFCF8EDD98854F636F)), L_5, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0022:
	{
		goto IL_0059;
	}

IL_0059:
	{
		goto IL_0090;
	}

IL_0090:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_8 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_9 = (uint16_t*)(&L_8->___uint16_0);
		V_2 = L_9;
		uint16_t* L_10 = V_2;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,uint16_t*,intptr_t,false,false>(L_10,NULL));
		int32_t L_12 = ___0_index;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = ((int32_t)*(((uint16_t*)((intptr_t)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 2)))))));
		return (uint16_t)L_14;
	}
}
// Method Definition Index: 9157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_obj;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8(__this, ((*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	bool _returnValue;
	_returnValue = Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_inline(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// Method Definition Index: 9158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint16_t L_2;
		L_2 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		int32_t L_3 = V_0;
		uint16_t L_4;
		L_4 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_other), L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		bool L_5;
		L_5 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0027:
	{
		int32_t L_7 = V_0;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_8;
		L_8 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_0031:
	{
		goto IL_01f0;
	}

IL_01f0:
	{
		goto IL_03af;
	}

IL_03af:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_9 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_10 = L_9->___uint16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_11 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_12 = L_11.___register;
		uint16_t L_13 = L_12.___uint16_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_13))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_14 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_15 = L_14->___uint16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_16 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_17 = L_16.___register;
		uint16_t L_18 = L_17.___uint16_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_18))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_19 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_20 = L_19->___uint16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_21 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_22 = L_21.___register;
		uint16_t L_23 = L_22.___uint16_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_23))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_24 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_25 = L_24->___uint16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_26 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_27 = L_26.___register;
		uint16_t L_28 = L_27.___uint16_3;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_28))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_29 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_30 = L_29->___uint16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_31 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_32 = L_31.___register;
		uint16_t L_33 = L_32.___uint16_4;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_33))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_34 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_35 = L_34->___uint16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_36 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_37 = L_36.___register;
		uint16_t L_38 = L_37.___uint16_5;
		if ((!(((uint32_t)L_35) == ((uint32_t)L_38))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_39 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_40 = L_39->___uint16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_41 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_42 = L_41.___register;
		uint16_t L_43 = L_42.___uint16_6;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_43))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_44 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_45 = L_44->___uint16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_46 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_47 = L_46.___register;
		uint16_t L_48 = L_47.___uint16_7;
		return (bool)((((int32_t)L_45) == ((int32_t)L_48))? 1 : 0);
	}

IL_0494:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8_AdjustorThunk (RuntimeObject* __this, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_other, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	bool _returnValue;
	_returnValue = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// Method Definition Index: 9159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	CHECKED_LOCAL(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	int8_t V_4 = 0x0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0;
	int32_t V_7 = 0;
	int16_t V_8 = 0;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	uint64_t V_14 = 0;
	int32_t V_15 = 0;
	int64_t V_16 = 0;
	int32_t V_17 = 0;
	float V_18 = 0.0f;
	int32_t V_19 = 0;
	double V_20 = 0.0;
	{
		V_0 = 0;
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_034a;
		}
	}
	{
		goto IL_0059;
	}

IL_0059:
	{
		goto IL_00a7;
	}

IL_00a7:
	{
	}
	{
		V_5 = 0;
		goto IL_00ef;
	}

IL_00c7:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_5;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint16_t L_3;
		L_3 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		V_6 = L_3;
		int32_t L_4;
		L_4 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200((&V_6), NULL);
		CHECKED_LOCAL_INIT(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_StaticInit,(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_5;
		L_5 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_1, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_00ef:
	{
		int32_t L_7 = V_5;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_8;
		L_8 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_034a:
	{
		goto IL_04da;
	}

IL_04da:
	{
		goto IL_066a;
	}

IL_066a:
	{
	}
	{
		int32_t L_10 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_11 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_12 = (uint16_t*)(&L_11->___uint16_0);
		int32_t L_13;
		L_13 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_12, NULL);
		CHECKED_LOCAL_INIT(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_StaticInit,(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_14;
		L_14 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_10, L_13, NULL);
		V_0 = L_14;
		int32_t L_15 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_16 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_17 = (uint16_t*)(&L_16->___uint16_1);
		int32_t L_18;
		L_18 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_17, NULL);
		int32_t L_19;
		L_19 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_15, L_18, NULL);
		V_0 = L_19;
		int32_t L_20 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_21 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_22 = (uint16_t*)(&L_21->___uint16_2);
		int32_t L_23;
		L_23 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_22, NULL);
		int32_t L_24;
		L_24 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_20, L_23, NULL);
		V_0 = L_24;
		int32_t L_25 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_26 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_27 = (uint16_t*)(&L_26->___uint16_3);
		int32_t L_28;
		L_28 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_27, NULL);
		int32_t L_29;
		L_29 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_25, L_28, NULL);
		V_0 = L_29;
		int32_t L_30 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_31 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_32 = (uint16_t*)(&L_31->___uint16_4);
		int32_t L_33;
		L_33 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_32, NULL);
		int32_t L_34;
		L_34 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_30, L_33, NULL);
		V_0 = L_34;
		int32_t L_35 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_36 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_37 = (uint16_t*)(&L_36->___uint16_5);
		int32_t L_38;
		L_38 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_37, NULL);
		int32_t L_39;
		L_39 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_35, L_38, NULL);
		V_0 = L_39;
		int32_t L_40 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_41 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_42 = (uint16_t*)(&L_41->___uint16_6);
		int32_t L_43;
		L_43 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_42, NULL);
		int32_t L_44;
		L_44 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_40, L_43, NULL);
		V_0 = L_44;
		int32_t L_45 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_46 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_47 = (uint16_t*)(&L_46->___uint16_7);
		int32_t L_48;
		L_48 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_47, NULL);
		int32_t L_49;
		L_49 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_45, L_48, NULL);
		V_0 = L_49;
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C  int32_t Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	int32_t _returnValue;
	_returnValue = Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 9160
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticInit,(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_1;
		L_1 = Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7(__this, _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	String_t* _returnValue;
	_returnValue = Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 9161
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___1_formatProvider;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2;
		L_2 = NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline(L_2, NULL);
		V_1 = L_3;
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, ((int32_t)60), NULL);
		V_2 = 0;
		goto IL_0053;
	}

IL_001f:
	{
		StringBuilder_t* L_6 = V_0;
		int32_t L_7 = V_2;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint16_t L_8;
		L_8 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_7, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		uint16_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), &L_9);
		String_t* L_11 = ___0_format;
		RuntimeObject* L_12 = ___1_formatProvider;
		String_t* L_13;
		L_13 = UInt16_ToString_mBD648884B6569D3E7D779669EEFCB1ED5EE4A521((uint16_t*)UnBox(L_10), L_11, L_12, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_13, NULL);
		StringBuilder_t* L_15 = V_0;
		String_t* L_16 = V_1;
		NullCheck(L_15);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_16, NULL);
		StringBuilder_t* L_18 = V_0;
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_18, ((int32_t)32), NULL);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0053:
	{
		int32_t L_21 = V_2;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_22;
		L_22 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_21) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_001f;
		}
	}
	{
		StringBuilder_t* L_23 = V_0;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_24;
		L_24 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		uint16_t L_25;
		L_25 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		uint16_t L_26 = L_25;
		RuntimeObject* L_27 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), &L_26);
		String_t* L_28 = ___0_format;
		RuntimeObject* L_29 = ___1_formatProvider;
		String_t* L_30;
		L_30 = UInt16_ToString_mBD648884B6569D3E7D779669EEFCB1ED5EE4A521((uint16_t*)UnBox(L_27), L_28, L_29, NULL);
		NullCheck(L_23);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, L_30, NULL);
		StringBuilder_t* L_32 = V_0;
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_32, ((int32_t)62), NULL);
		StringBuilder_t* L_34 = V_0;
		NullCheck(L_34);
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_34);
		return L_35;
	}
}
IL2CPP_EXTERN_C  String_t* Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	String_t* _returnValue;
	_returnValue = Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7(_thisAdjusted, ___0_format, ___1_formatProvider, method);
	return _returnValue;
}
// Method Definition Index: 9162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___1_right;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8((&___0_left), L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_1;
	}
}
// Method Definition Index: 9163
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_op_Inequality_m32F4DFF513244591C00E23353EB6F6294E8BE9F0 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___0_left;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = ___1_right;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_inline(L_0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 9164
// Method Definition Index: 9165
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int8_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint16_t* V_4 = NULL;
	int32_t V_5 = 0;
	int16_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint32_t* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint64_t* V_12 = NULL;
	int32_t V_13 = 0;
	int64_t* V_14 = NULL;
	int32_t V_15 = 0;
	float* V_16 = NULL;
	int32_t V_17 = 0;
	double* V_18 = NULL;
	int32_t V_19 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A V_20;
	memset((&V_20), 0, sizeof(V_20));
	uint16_t* G_B21_0 = NULL;
	uint16_t* G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	uint16_t* G_B22_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B185_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B184_0 = NULL;
	int32_t G_B186_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B186_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B188_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B187_0 = NULL;
	int32_t G_B189_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B189_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B191_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B190_0 = NULL;
	int32_t G_B192_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B192_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B194_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B193_0 = NULL;
	int32_t G_B195_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B195_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B197_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B196_0 = NULL;
	int32_t G_B198_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B198_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B200_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B199_0 = NULL;
	int32_t G_B201_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B201_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B203_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B202_0 = NULL;
	int32_t G_B204_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B204_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B206_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B205_0 = NULL;
	int32_t G_B207_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B207_1 = NULL;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0447;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		goto IL_00c6;
	}

IL_00c6:
	{
	}
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		if ((uintptr_t)L_2 * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_3 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_2, 2));
		int8_t* L_4;
		if (L_3 == 0)
		{
			L_4 = NULL;
		}
		else
		{
			L_4 = (int8_t*)alloca(L_3);
			memset(L_4, 0, L_3);
		}
		V_4 = (uint16_t*)L_4;
		V_5 = 0;
		goto IL_0122;
	}

IL_00f2:
	{
		uint16_t* L_5 = V_4;
		int32_t L_6 = V_5;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8 = V_5;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint16_t L_9;
		L_9 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		int32_t L_10 = V_5;
		uint16_t L_11;
		L_11 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_10, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		bool L_12;
		L_12 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_9, L_11, NULL);
		if (L_12)
		{
			G_B21_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 2))));
			goto IL_0116;
		}
		G_B20_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 2))));
	}
	{
		G_B22_0 = 0;
		G_B22_1 = G_B20_0;
		goto IL_011b;
	}

IL_0116:
	{
		uint16_t L_13;
		L_13 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B22_0 = ((int32_t)(L_13));
		G_B22_1 = G_B21_0;
	}

IL_011b:
	{
		*(((int16_t*)G_B22_1)) = ((int16_t)G_B22_0);
		int32_t L_14 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0122:
	{
		int32_t L_15 = V_5;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_16;
		L_16 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_00f2;
		}
	}
	{
		uint16_t* L_17 = V_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_18), (void*)L_17, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		return L_18;
	}

IL_0447:
	{
		il2cpp_codegen_initobj((&V_20), sizeof(Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A));
		goto IL_06e5;
	}

IL_06e5:
	{
		goto IL_097b;
	}

IL_097b:
	{
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_19 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_20 = L_19.___register;
		uint16_t L_21 = L_20.___uint16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_22 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_23 = L_22.___register;
		uint16_t L_24 = L_23.___uint16_0;
		if ((((int32_t)L_21) == ((int32_t)L_24)))
		{
			G_B185_0 = (&V_20);
			goto IL_09b6;
		}
		G_B184_0 = (&V_20);
	}
	{
		G_B186_0 = 0;
		G_B186_1 = G_B184_0;
		goto IL_09bb;
	}

IL_09b6:
	{
		uint16_t L_25;
		L_25 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B186_0 = ((int32_t)(L_25));
		G_B186_1 = G_B185_0;
	}

IL_09bb:
	{
		G_B186_1->___uint16_0 = (uint16_t)G_B186_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_26 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_27 = L_26.___register;
		uint16_t L_28 = L_27.___uint16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_29 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_30 = L_29.___register;
		uint16_t L_31 = L_30.___uint16_1;
		if ((((int32_t)L_28) == ((int32_t)L_31)))
		{
			G_B188_0 = (&V_20);
			goto IL_09dd;
		}
		G_B187_0 = (&V_20);
	}
	{
		G_B189_0 = 0;
		G_B189_1 = G_B187_0;
		goto IL_09e2;
	}

IL_09dd:
	{
		uint16_t L_32;
		L_32 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B189_0 = ((int32_t)(L_32));
		G_B189_1 = G_B188_0;
	}

IL_09e2:
	{
		G_B189_1->___uint16_1 = (uint16_t)G_B189_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_33 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_34 = L_33.___register;
		uint16_t L_35 = L_34.___uint16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_36 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_37 = L_36.___register;
		uint16_t L_38 = L_37.___uint16_2;
		if ((((int32_t)L_35) == ((int32_t)L_38)))
		{
			G_B191_0 = (&V_20);
			goto IL_0a04;
		}
		G_B190_0 = (&V_20);
	}
	{
		G_B192_0 = 0;
		G_B192_1 = G_B190_0;
		goto IL_0a09;
	}

IL_0a04:
	{
		uint16_t L_39;
		L_39 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B192_0 = ((int32_t)(L_39));
		G_B192_1 = G_B191_0;
	}

IL_0a09:
	{
		G_B192_1->___uint16_2 = (uint16_t)G_B192_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_40 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_41 = L_40.___register;
		uint16_t L_42 = L_41.___uint16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_43 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_44 = L_43.___register;
		uint16_t L_45 = L_44.___uint16_3;
		if ((((int32_t)L_42) == ((int32_t)L_45)))
		{
			G_B194_0 = (&V_20);
			goto IL_0a2b;
		}
		G_B193_0 = (&V_20);
	}
	{
		G_B195_0 = 0;
		G_B195_1 = G_B193_0;
		goto IL_0a30;
	}

IL_0a2b:
	{
		uint16_t L_46;
		L_46 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B195_0 = ((int32_t)(L_46));
		G_B195_1 = G_B194_0;
	}

IL_0a30:
	{
		G_B195_1->___uint16_3 = (uint16_t)G_B195_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_47 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_48 = L_47.___register;
		uint16_t L_49 = L_48.___uint16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_50 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_51 = L_50.___register;
		uint16_t L_52 = L_51.___uint16_4;
		if ((((int32_t)L_49) == ((int32_t)L_52)))
		{
			G_B197_0 = (&V_20);
			goto IL_0a52;
		}
		G_B196_0 = (&V_20);
	}
	{
		G_B198_0 = 0;
		G_B198_1 = G_B196_0;
		goto IL_0a57;
	}

IL_0a52:
	{
		uint16_t L_53;
		L_53 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B198_0 = ((int32_t)(L_53));
		G_B198_1 = G_B197_0;
	}

IL_0a57:
	{
		G_B198_1->___uint16_4 = (uint16_t)G_B198_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_54 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_55 = L_54.___register;
		uint16_t L_56 = L_55.___uint16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_57 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_58 = L_57.___register;
		uint16_t L_59 = L_58.___uint16_5;
		if ((((int32_t)L_56) == ((int32_t)L_59)))
		{
			G_B200_0 = (&V_20);
			goto IL_0a79;
		}
		G_B199_0 = (&V_20);
	}
	{
		G_B201_0 = 0;
		G_B201_1 = G_B199_0;
		goto IL_0a7e;
	}

IL_0a79:
	{
		uint16_t L_60;
		L_60 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B201_0 = ((int32_t)(L_60));
		G_B201_1 = G_B200_0;
	}

IL_0a7e:
	{
		G_B201_1->___uint16_5 = (uint16_t)G_B201_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_61 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_62 = L_61.___register;
		uint16_t L_63 = L_62.___uint16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_64 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_65 = L_64.___register;
		uint16_t L_66 = L_65.___uint16_6;
		if ((((int32_t)L_63) == ((int32_t)L_66)))
		{
			G_B203_0 = (&V_20);
			goto IL_0aa0;
		}
		G_B202_0 = (&V_20);
	}
	{
		G_B204_0 = 0;
		G_B204_1 = G_B202_0;
		goto IL_0aa5;
	}

IL_0aa0:
	{
		uint16_t L_67;
		L_67 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B204_0 = ((int32_t)(L_67));
		G_B204_1 = G_B203_0;
	}

IL_0aa5:
	{
		G_B204_1->___uint16_6 = (uint16_t)G_B204_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_68 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_69 = L_68.___register;
		uint16_t L_70 = L_69.___uint16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_71 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_72 = L_71.___register;
		uint16_t L_73 = L_72.___uint16_7;
		if ((((int32_t)L_70) == ((int32_t)L_73)))
		{
			G_B206_0 = (&V_20);
			goto IL_0ac7;
		}
		G_B205_0 = (&V_20);
	}
	{
		G_B207_0 = 0;
		G_B207_1 = G_B205_0;
		goto IL_0acc;
	}

IL_0ac7:
	{
		uint16_t L_74;
		L_74 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B207_0 = ((int32_t)(L_74));
		G_B207_1 = G_B206_0;
	}

IL_0acc:
	{
		G_B207_1->___uint16_7 = (uint16_t)G_B207_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_75;
		memset((&L_75), 0, sizeof(L_75));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_75), (&V_20), NULL);
		return L_75;
	}
}
// Method Definition Index: 9166
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0034;
	}

IL_0034:
	{
		goto IL_0068;
	}

IL_0068:
	{
	}
	{
		uint16_t L_0 = ___0_left;
		uint16_t L_1 = ___1_right;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// Method Definition Index: 9167
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0027;
	}

IL_0027:
	{
		goto IL_004e;
	}

IL_004e:
	{
	}
	{
		return (uint16_t)1;
	}
}
// Method Definition Index: 9168
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_002b;
	}

IL_002b:
	{
		goto IL_0056;
	}

IL_0056:
	{
	}
	{
		uint16_t L_0;
		L_0 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		return L_0;
	}
}
// Method Definition Index: 9169
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__cctor_m6764AA686DE7E188C362C5B3E96AB2F5AB09F3CA (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0;
		L_0 = Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83(NULL);
		((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_count = L_0;
		il2cpp_codegen_initobj((&((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_zero), sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489));
		uint16_t L_1;
		L_1 = Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_inline(NULL);
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427((&L_2), L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_one = L_2;
		uint16_t L_3;
		L_3 = Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_inline(NULL);
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427((&L_4), L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_allOnes = L_4;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 9149
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0 = ((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_count;
		return L_0;
	}
}
// Method Definition Index: 9150
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_get_Zero_m052680C155E15387C16A5E044176ACB59DF53359 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_0 = ((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_zero;
		return L_0;
	}
}
// Method Definition Index: 9151
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_mE29E088973A17B81B830C30831075135FC8E263A (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	VectorSizeHelper_tF54ACCE947CB8A38047BEB642392A4E7345A157D V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B13_0 = 0;
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* L_0 = (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*)(&(&V_0)->____placeholder);
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_1 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&L_0->___register);
		uint8_t* L_2 = (uint8_t*)(&L_1->___byte_0);
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		V_1 = (uint8_t*)L_3;
		uint8_t* L_4 = (uint8_t*)(&(&V_0)->____byte);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_4,NULL));
		uint8_t* L_6 = V_1;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,uint8_t*,intptr_t,false,false>(((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_5, (intptr_t)L_6))/1)),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(L_7,NULL));
		V_2 = (-1);
		G_B2_0 = L_8;
		goto IL_0045;
	}

IL_0045:
	{
		G_B4_0 = G_B2_0;
		goto IL_0067;
	}

IL_0067:
	{
		G_B6_0 = G_B4_0;
		goto IL_0089;
	}

IL_0089:
	{
		G_B8_0 = G_B6_0;
		goto IL_00ab;
	}

IL_00ab:
	{
		G_B10_0 = G_B8_0;
		goto IL_00cd;
	}

IL_00cd:
	{
		G_B12_0 = G_B10_0;
		goto IL_00ef;
	}

IL_00ef:
	{
		G_B13_0 = G_B12_0;
	}
	{
		V_2 = 8;
		G_B21_0 = G_B13_0;
		goto IL_0176;
	}

IL_0176:
	{
		int32_t L_9 = V_2;
		return ((int32_t)(G_B21_0/L_9));
	}
}
// Method Definition Index: 9152
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m1B5D6A9264B4450B3C14BD8FF9430354A337F2D6 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int8_t* V_3 = NULL;
	int8_t* V_4 = NULL;
	int32_t V_5 = 0;
	uint16_t* V_6 = NULL;
	uint16_t* V_7 = NULL;
	int32_t V_8 = 0;
	int16_t* V_9 = NULL;
	int16_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint32_t* V_12 = NULL;
	uint32_t* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t* V_15 = NULL;
	int32_t* V_16 = NULL;
	int32_t V_17 = 0;
	uint64_t* V_18 = NULL;
	uint64_t* V_19 = NULL;
	int32_t V_20 = 0;
	int64_t* V_21 = NULL;
	int64_t* V_22 = NULL;
	int32_t V_23 = 0;
	float* V_24 = NULL;
	float* V_25 = NULL;
	int32_t V_26 = 0;
	double* V_27 = NULL;
	double* V_28 = NULL;
	int32_t V_29 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A));
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0386;
		}
	}
	{
		goto IL_005e;
	}

IL_005e:
	{
		goto IL_00b3;
	}

IL_00b3:
	{
		goto IL_010d;
	}

IL_010d:
	{
		goto IL_0167;
	}

IL_0167:
	{
		goto IL_01c1;
	}

IL_01c1:
	{
		goto IL_021b;
	}

IL_021b:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_1 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t* L_2 = (uint64_t*)(&L_1->___uint64_0);
		V_19 = L_2;
		uint64_t* L_3 = V_19;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,uint64_t*,intptr_t,false,false>(L_3,NULL));
		V_18 = (uint64_t*)L_4;
		V_20 = 0;
		goto IL_0267;
	}

IL_024d:
	{
		uint64_t* L_5 = V_18;
		int32_t L_6 = V_20;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		uint64_t L_8 = ___0_value;
		*(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 8)))))) = ((int64_t)L_8);
		int32_t L_9 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0267:
	{
		int32_t L_10 = V_20;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_024d;
		}
	}
	{
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_19 = (uint64_t*)L_12;
		return;
	}

IL_0386:
	{
		goto IL_0505;
	}

IL_0505:
	{
		goto IL_0684;
	}

IL_0684:
	{
		goto IL_0753;
	}

IL_0753:
	{
		goto IL_0822;
	}

IL_0822:
	{
		goto IL_0896;
	}

IL_0896:
	{
		goto IL_090a;
	}

IL_090a:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_13 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t L_14 = ___0_value;
		L_13->___uint64_0 = L_14;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_15 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t L_16 = ___0_value;
		L_15->___uint64_1 = L_16;
		return;
	}
}
// Method Definition Index: 9153
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, void* ___0_dataPointer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_dataPointer;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		Vector_1__ctor_mB3EB022FA5067096F41350560FA447FBA16BFF2B(__this, L_0, 0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		return;
	}
}
// Method Definition Index: 9154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mB3EB022FA5067096F41350560FA447FBA16BFF2B (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	int8_t* V_4 = NULL;
	int8_t* V_5 = NULL;
	int8_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint16_t* V_8 = NULL;
	uint16_t* V_9 = NULL;
	uint16_t* V_10 = NULL;
	int32_t V_11 = 0;
	int16_t* V_12 = NULL;
	int16_t* V_13 = NULL;
	int16_t* V_14 = NULL;
	int32_t V_15 = 0;
	uint32_t* V_16 = NULL;
	uint32_t* V_17 = NULL;
	uint32_t* V_18 = NULL;
	int32_t V_19 = 0;
	int32_t* V_20 = NULL;
	int32_t* V_21 = NULL;
	int32_t* V_22 = NULL;
	int32_t V_23 = 0;
	uint64_t* V_24 = NULL;
	uint64_t* V_25 = NULL;
	uint64_t* V_26 = NULL;
	int32_t V_27 = 0;
	int64_t* V_28 = NULL;
	int64_t* V_29 = NULL;
	int64_t* V_30 = NULL;
	int32_t V_31 = 0;
	float* V_32 = NULL;
	float* V_33 = NULL;
	float* V_34 = NULL;
	int32_t V_35 = 0;
	double* V_36 = NULL;
	double* V_37 = NULL;
	double* V_38 = NULL;
	int32_t V_39 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A));
		goto IL_0053;
	}

IL_0053:
	{
		goto IL_00ae;
	}

IL_00ae:
	{
		goto IL_0112;
	}

IL_0112:
	{
		goto IL_0176;
	}

IL_0176:
	{
		goto IL_01da;
	}

IL_01da:
	{
		goto IL_023e;
	}

IL_023e:
	{
	}
	{
		void* L_0 = ___0_dataPointer;
		V_24 = (uint64_t*)L_0;
		uint64_t* L_1 = V_24;
		int32_t L_2 = ___1_offset;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		V_24 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, 8))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_4 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t* L_5 = (uint64_t*)(&L_4->___uint64_0);
		V_26 = L_5;
		uint64_t* L_6 = V_26;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint64_t*,intptr_t,false,false>(L_6,NULL));
		V_25 = (uint64_t*)L_7;
		V_27 = 0;
		goto IL_0294;
	}

IL_027c:
	{
		uint64_t* L_8 = V_25;
		int32_t L_9 = V_27;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		uint64_t* L_11 = V_24;
		int32_t L_12 = V_27;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int64_t L_14 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 8))))));
		*(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 8)))))) = L_14;
		int32_t L_15 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0294:
	{
		int32_t L_16 = V_27;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_17;
		L_17 = Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_027c;
		}
	}
	{
		uintptr_t L_18 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_26 = (uint64_t*)L_18;
		return;
	}
}
// Method Definition Index: 9155
// Method Definition Index: 9156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	int8_t* V_1 = NULL;
	uint16_t* V_2 = NULL;
	int16_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	uint64_t* V_6 = NULL;
	int64_t* V_7 = NULL;
	float* V_8 = NULL;
	double* V_9 = NULL;
	{
		int32_t L_0 = ___0_index;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_2 = ___0_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}

IL_000c:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491788442E76F5D7830F0DBFCF8EDD98854F636F)), L_5, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0022:
	{
		goto IL_0059;
	}

IL_0059:
	{
		goto IL_0090;
	}

IL_0090:
	{
		goto IL_00ca;
	}

IL_00ca:
	{
		goto IL_0104;
	}

IL_0104:
	{
		goto IL_0140;
	}

IL_0140:
	{
		goto IL_017c;
	}

IL_017c:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_8 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t* L_9 = (uint64_t*)(&L_8->___uint64_0);
		V_6 = L_9;
		uint64_t* L_10 = V_6;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,uint64_t*,intptr_t,false,false>(L_10,NULL));
		int32_t L_12 = ___0_index;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int64_t L_14 = *(((int64_t*)((intptr_t)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 8))))));
		return L_14;
	}
}
// Method Definition Index: 9157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mE275DCDE4DC3B6FB30AB80ACEAC8363207BA9BEC (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_obj;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27(__this, ((*(Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Vector_1_Equals_mE275DCDE4DC3B6FB30AB80ACEAC8363207BA9BEC_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A>(__this);
	bool _returnValue;
	_returnValue = Vector_1_Equals_mE275DCDE4DC3B6FB30AB80ACEAC8363207BA9BEC_inline(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// Method Definition Index: 9158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_2;
		L_2 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		int32_t L_3 = V_0;
		uint64_t L_4;
		L_4 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___0_other), L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		bool L_5;
		L_5 = Vector_1_ScalarEquals_m73081D1B852400C74618D0A814BBED2FE272175D_inline(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0027:
	{
		int32_t L_7 = V_0;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_8;
		L_8 = Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_0031:
	{
		goto IL_01f0;
	}

IL_01f0:
	{
		goto IL_03af;
	}

IL_03af:
	{
		goto IL_0496;
	}

IL_0496:
	{
		goto IL_057d;
	}

IL_057d:
	{
		goto IL_05fb;
	}

IL_05fb:
	{
		goto IL_0679;
	}

IL_0679:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_9 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t L_10 = L_9->___uint64_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_11 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_12 = L_11.___register;
		uint64_t L_13 = L_12.___uint64_0;
		if ((!(((uint64_t)L_10) == ((uint64_t)L_13))))
		{
			goto IL_06c5;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_14 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t L_15 = L_14->___uint64_1;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_16 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_17 = L_16.___register;
		uint64_t L_18 = L_17.___uint64_1;
		return (bool)((((int64_t)L_15) == ((int64_t)L_18))? 1 : 0);
	}

IL_06c5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27_AdjustorThunk (RuntimeObject* __this, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_other, const RuntimeMethod* method)
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A>(__this);
	bool _returnValue;
	_returnValue = Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// Method Definition Index: 9159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_mEC951E56E2DC500CF877DFAD5542E0920B73B00A (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	CHECKED_LOCAL(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	int8_t V_4 = 0x0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0;
	int32_t V_7 = 0;
	int16_t V_8 = 0;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	uint64_t V_14 = 0;
	int32_t V_15 = 0;
	int64_t V_16 = 0;
	int32_t V_17 = 0;
	float V_18 = 0.0f;
	int32_t V_19 = 0;
	double V_20 = 0.0;
	{
		V_0 = 0;
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_034a;
		}
	}
	{
		goto IL_0059;
	}

IL_0059:
	{
		goto IL_00a7;
	}

IL_00a7:
	{
		goto IL_00fa;
	}

IL_00fa:
	{
		goto IL_014d;
	}

IL_014d:
	{
		goto IL_01a0;
	}

IL_01a0:
	{
		goto IL_01f3;
	}

IL_01f3:
	{
	}
	{
		V_13 = 0;
		goto IL_023b;
	}

IL_0213:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_13;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_3;
		L_3 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		V_14 = L_3;
		int32_t L_4;
		L_4 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_14), NULL);
		CHECKED_LOCAL_INIT(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_StaticInit,(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_5;
		L_5 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_1, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_023b:
	{
		int32_t L_7 = V_13;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_8;
		L_8 = Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0213;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_034a:
	{
		goto IL_04da;
	}

IL_04da:
	{
		goto IL_066a;
	}

IL_066a:
	{
		goto IL_0742;
	}

IL_0742:
	{
		goto IL_081a;
	}

IL_081a:
	{
		goto IL_0893;
	}

IL_0893:
	{
		goto IL_090c;
	}

IL_090c:
	{
	}
	{
		int32_t L_10 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_11 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t* L_12 = (uint64_t*)(&L_11->___uint64_0);
		int32_t L_13;
		L_13 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_12, NULL);
		CHECKED_LOCAL_INIT(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_StaticInit,(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_14;
		L_14 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_10, L_13, NULL);
		V_0 = L_14;
		int32_t L_15 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_16 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t* L_17 = (uint64_t*)(&L_16->___uint64_1);
		int32_t L_18;
		L_18 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_17, NULL);
		int32_t L_19;
		L_19 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_15, L_18, NULL);
		V_0 = L_19;
		int32_t L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C  int32_t Vector_1_GetHashCode_mEC951E56E2DC500CF877DFAD5542E0920B73B00A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A>(__this);
	int32_t _returnValue;
	_returnValue = Vector_1_GetHashCode_mEC951E56E2DC500CF877DFAD5542E0920B73B00A(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 9160
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m3EBF88D3E195BD2C4B0D1CCBD9F71E32233CA4F4 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticInit,(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_1;
		L_1 = Vector_1_ToString_m8F20119DB8CF7117F2D6E4D165C4A843F7D3586C(__this, _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* Vector_1_ToString_m3EBF88D3E195BD2C4B0D1CCBD9F71E32233CA4F4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A>(__this);
	String_t* _returnValue;
	_returnValue = Vector_1_ToString_m3EBF88D3E195BD2C4B0D1CCBD9F71E32233CA4F4(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 9161
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m8F20119DB8CF7117F2D6E4D165C4A843F7D3586C (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___1_formatProvider;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2;
		L_2 = NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline(L_2, NULL);
		V_1 = L_3;
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, ((int32_t)60), NULL);
		V_2 = 0;
		goto IL_0053;
	}

IL_001f:
	{
		StringBuilder_t* L_6 = V_0;
		int32_t L_7 = V_2;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_8;
		L_8 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, L_7, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		uint64_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), &L_9);
		String_t* L_11 = ___0_format;
		RuntimeObject* L_12 = ___1_formatProvider;
		String_t* L_13;
		L_13 = UInt64_ToString_m779041C8FDD58BF8617838B00CD041788DB2F1A3((uint64_t*)UnBox(L_10), L_11, L_12, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_13, NULL);
		StringBuilder_t* L_15 = V_0;
		String_t* L_16 = V_1;
		NullCheck(L_15);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_16, NULL);
		StringBuilder_t* L_18 = V_0;
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_18, ((int32_t)32), NULL);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0053:
	{
		int32_t L_21 = V_2;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_22;
		L_22 = Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_21) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_001f;
		}
	}
	{
		StringBuilder_t* L_23 = V_0;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_24;
		L_24 = Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		uint64_t L_25;
		L_25 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		uint64_t L_26 = L_25;
		RuntimeObject* L_27 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), &L_26);
		String_t* L_28 = ___0_format;
		RuntimeObject* L_29 = ___1_formatProvider;
		String_t* L_30;
		L_30 = UInt64_ToString_m779041C8FDD58BF8617838B00CD041788DB2F1A3((uint64_t*)UnBox(L_27), L_28, L_29, NULL);
		NullCheck(L_23);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, L_30, NULL);
		StringBuilder_t* L_32 = V_0;
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_32, ((int32_t)62), NULL);
		StringBuilder_t* L_34 = V_0;
		NullCheck(L_34);
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_34);
		return L_35;
	}
}
IL2CPP_EXTERN_C  String_t* Vector_1_ToString_m8F20119DB8CF7117F2D6E4D165C4A843F7D3586C_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method)
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A>(__this);
	String_t* _returnValue;
	_returnValue = Vector_1_ToString_m8F20119DB8CF7117F2D6E4D165C4A843F7D3586C(_thisAdjusted, ___0_format, ___1_formatProvider, method);
	return _returnValue;
}
// Method Definition Index: 9162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mD4D4AE7733CACE50CA2FCFFFB0A16818EEC01293 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_left, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_0 = ___1_right;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27((&___0_left), L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_1;
	}
}
// Method Definition Index: 9163
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_op_Inequality_m4963768CF3F7944DA5E519ADB8668431198BBC36 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_left, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_0 = ___0_left;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1 = ___1_right;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = Vector_1_op_Equality_mD4D4AE7733CACE50CA2FCFFFB0A16818EEC01293_inline(L_0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 9164
// Method Definition Index: 9165
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_Equals_m10063846A51F9D722BC0A8999A9F6B12C37988FF (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_left, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int8_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint16_t* V_4 = NULL;
	int32_t V_5 = 0;
	int16_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint32_t* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint64_t* V_12 = NULL;
	int32_t V_13 = 0;
	int64_t* V_14 = NULL;
	int32_t V_15 = 0;
	float* V_16 = NULL;
	int32_t V_17 = 0;
	double* V_18 = NULL;
	int32_t V_19 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A V_20;
	memset((&V_20), 0, sizeof(V_20));
	uint64_t* G_B53_0 = NULL;
	uint64_t* G_B52_0 = NULL;
	uint64_t G_B54_0 = 0;
	uint64_t* G_B54_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B265_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B264_0 = NULL;
	uint64_t G_B266_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B266_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B268_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B267_0 = NULL;
	uint64_t G_B269_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B269_1 = NULL;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0447;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		goto IL_00c6;
	}

IL_00c6:
	{
		goto IL_0133;
	}

IL_0133:
	{
		goto IL_01a0;
	}

IL_01a0:
	{
		goto IL_020d;
	}

IL_020d:
	{
		goto IL_027a;
	}

IL_027a:
	{
	}
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		if ((uintptr_t)L_2 * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_3 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_2, 8));
		int8_t* L_4;
		if (L_3 == 0)
		{
			L_4 = NULL;
		}
		else
		{
			L_4 = (int8_t*)alloca(L_3);
			memset(L_4, 0, L_3);
		}
		V_12 = (uint64_t*)L_4;
		V_13 = 0;
		goto IL_02d7;
	}

IL_02a6:
	{
		uint64_t* L_5 = V_12;
		int32_t L_6 = V_13;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8 = V_13;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_9;
		L_9 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___0_left), L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		int32_t L_10 = V_13;
		uint64_t L_11;
		L_11 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___1_right), L_10, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		bool L_12;
		L_12 = Vector_1_ScalarEquals_m73081D1B852400C74618D0A814BBED2FE272175D_inline(L_9, L_11, NULL);
		if (L_12)
		{
			G_B53_0 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 8))));
			goto IL_02cb;
		}
		G_B52_0 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 8))));
	}
	{
		int64_t L_13 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		G_B54_0 = ((uint64_t)(L_13));
		G_B54_1 = G_B52_0;
		goto IL_02d0;
	}

IL_02cb:
	{
		uint64_t L_14;
		L_14 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B54_0 = L_14;
		G_B54_1 = G_B53_0;
	}

IL_02d0:
	{
		*(((int64_t*)G_B54_1)) = ((int64_t)G_B54_0);
		int32_t L_15 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_02d7:
	{
		int32_t L_16 = V_13;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_17;
		L_17 = Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_02a6;
		}
	}
	{
		uint64_t* L_18 = V_12;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA((&L_19), (void*)L_18, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		return L_19;
	}

IL_0447:
	{
		il2cpp_codegen_initobj((&V_20), sizeof(Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A));
		goto IL_06e5;
	}

IL_06e5:
	{
		goto IL_097b;
	}

IL_097b:
	{
		goto IL_0ad9;
	}

IL_0ad9:
	{
		goto IL_0c37;
	}

IL_0c37:
	{
		goto IL_0cf9;
	}

IL_0cf9:
	{
		goto IL_0dbb;
	}

IL_0dbb:
	{
	}
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_20 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_21 = L_20.___register;
		uint64_t L_22 = L_21.___uint64_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_23 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_24 = L_23.___register;
		uint64_t L_25 = L_24.___uint64_0;
		if ((((int64_t)L_22) == ((int64_t)L_25)))
		{
			G_B265_0 = (&V_20);
			goto IL_0df4;
		}
		G_B264_0 = (&V_20);
	}
	{
		int64_t L_26 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		G_B266_0 = ((uint64_t)(L_26));
		G_B266_1 = G_B264_0;
		goto IL_0df9;
	}

IL_0df4:
	{
		uint64_t L_27;
		L_27 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B266_0 = L_27;
		G_B266_1 = G_B265_0;
	}

IL_0df9:
	{
		G_B266_1->___uint64_0 = G_B266_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_28 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_29 = L_28.___register;
		uint64_t L_30 = L_29.___uint64_1;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_31 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_32 = L_31.___register;
		uint64_t L_33 = L_32.___uint64_1;
		if ((((int64_t)L_30) == ((int64_t)L_33)))
		{
			G_B268_0 = (&V_20);
			goto IL_0e1c;
		}
		G_B267_0 = (&V_20);
	}
	{
		int64_t L_34 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		G_B269_0 = ((uint64_t)(L_34));
		G_B269_1 = G_B267_0;
		goto IL_0e21;
	}

IL_0e1c:
	{
		uint64_t L_35;
		L_35 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B269_0 = L_35;
		G_B269_1 = G_B268_0;
	}

IL_0e21:
	{
		G_B269_1->___uint64_1 = G_B269_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606((&L_36), (&V_20), NULL);
		return L_36;
	}
}
// Method Definition Index: 9166
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m73081D1B852400C74618D0A814BBED2FE272175D (uint64_t ___0_left, uint64_t ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0034;
	}

IL_0034:
	{
		goto IL_0068;
	}

IL_0068:
	{
		goto IL_009c;
	}

IL_009c:
	{
		goto IL_00d0;
	}

IL_00d0:
	{
		goto IL_0104;
	}

IL_0104:
	{
		goto IL_0138;
	}

IL_0138:
	{
	}
	{
		uint64_t L_0 = ___0_left;
		uint64_t L_1 = ___1_right;
		return (bool)((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
	}
}
// Method Definition Index: 9167
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Vector_1_GetOneValue_mE2DE5D8CFC8D7A4990743C160CD1C4ED71CDA288 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0027;
	}

IL_0027:
	{
		goto IL_004e;
	}

IL_004e:
	{
		goto IL_0075;
	}

IL_0075:
	{
		goto IL_009c;
	}

IL_009c:
	{
		goto IL_00c3;
	}

IL_00c3:
	{
		goto IL_00ea;
	}

IL_00ea:
	{
	}
	{
		int64_t L_0 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		return L_0;
	}
}
// Method Definition Index: 9168
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Vector_1_GetAllBitsSetValue_m99E582A6A7DA5089B26FE42E5F8FDE26A6005ED0 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_002b;
	}

IL_002b:
	{
		goto IL_0056;
	}

IL_0056:
	{
		goto IL_0081;
	}

IL_0081:
	{
		goto IL_00ac;
	}

IL_00ac:
	{
		goto IL_00d7;
	}

IL_00d7:
	{
		goto IL_0102;
	}

IL_0102:
	{
	}
	{
		uint64_t L_0;
		L_0 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		return L_0;
	}
}
// Method Definition Index: 9169
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__cctor_m152F538F7C3F6DB8EA8C03902F8A68FF06A70109 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0;
		L_0 = Vector_1_InitializeCount_mE29E088973A17B81B830C30831075135FC8E263A(NULL);
		((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_count = L_0;
		il2cpp_codegen_initobj((&((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_zero), sizeof(Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A));
		uint64_t L_1;
		L_1 = Vector_1_GetOneValue_mE2DE5D8CFC8D7A4990743C160CD1C4ED71CDA288_inline(NULL);
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector_1__ctor_m1B5D6A9264B4450B3C14BD8FF9430354A337F2D6((&L_2), L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_one = L_2;
		uint64_t L_3;
		L_3 = Vector_1_GetAllBitsSetValue_m99E582A6A7DA5089B26FE42E5F8FDE26A6005ED0_inline(NULL);
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector_1__ctor_m1B5D6A9264B4450B3C14BD8FF9430354A337F2D6((&L_4), L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_allOnes = L_4;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 12857
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_value;
		__this->___U3CelementTargetU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CelementTargetU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 44138
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		float L_2 = ___1_b;
		return L_2;
	}

IL_0006:
	{
		float L_3 = ___0_a;
		return L_3;
	}
}
// Method Definition Index: 44136
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		float L_2 = ___1_b;
		return L_2;
	}

IL_0006:
	{
		float L_3 = ___0_a;
		return L_3;
	}
}
// Method Definition Index: 44155
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = ___0_value;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0018;
		}
	}
	{
		float L_1 = ___0_value;
		if ((((float)L_1) > ((float)(1.0f))))
		{
			goto IL_0012;
		}
	}
	{
		float L_2 = ___0_value;
		return L_2;
	}

IL_0012:
	{
		return (1.0f);
	}

IL_0018:
	{
		return (0.0f);
	}
}
// Method Definition Index: 9622
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = __this->___numberGroupSeparator;
		return L_0;
	}
}
// Method Definition Index: 9141
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint16_t V_0 = 0;
	{
		V_0 = (uint16_t)0;
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,uint16_t*,intptr_t,false,false>((&V_0),NULL));
		*(((int16_t*)L_0)) = ((int16_t)((int32_t)65535));
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 9145
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint64_t V_0 = 0;
	{
		int64_t L_0 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = L_0;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,uint64_t*,intptr_t,false,false>((&V_0),NULL));
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>((-1),NULL));
		*(((int64_t*)L_1)) = L_2;
		uint64_t L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 10712
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_fshared_inline (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 889
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_mF53D8E0776F9AABF2CE8F1DD56CEF19FDB4C1599_gshared_inline (Func_3_t77F22AB9767953FDC31A6CFFF00E1541826CCDD3* __this, Il2CppSharedGenericObject* ___0_arg1, Il2CppSharedGenericObject* ___1_arg2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 10524
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tE4AF7E149217032C1AFD6D018342D58C2BB94D77 Enumerator_get_Current_m91805899B27B40B16B94C0ABBAD00442DC9D1EEF_gshared_inline (Enumerator_t58168766D1E54BD4791D0209E876F0E24ACFDF18* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2_tE4AF7E149217032C1AFD6D018342D58C2BB94D77 L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 10603
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 KeyValuePair_2_get_Key_m29BFACDD5CEA7793A032A003215F58FA58308EFD_gshared_inline (KeyValuePair_2_tE4AF7E149217032C1AFD6D018342D58C2BB94D77* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 10604
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m3B073AA7B627862C9CF55713EB00EA50B597C40E_gshared_inline (KeyValuePair_2_tE4AF7E149217032C1AFD6D018342D58C2BB94D77* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 887
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_inline (Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* __this, float ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef float (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 9149
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_count;
		return L_0;
	}
}
// Method Definition Index: 9157
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_obj;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8(__this, ((*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_2;
	}
}
// Method Definition Index: 9166
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0034;
	}

IL_0034:
	{
		goto IL_0068;
	}

IL_0068:
	{
	}
	{
		uint16_t L_0 = ___0_left;
		uint16_t L_1 = ___1_right;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// Method Definition Index: 9162
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___1_right;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8((&___0_left), L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_1;
	}
}
// Method Definition Index: 9167
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0027;
	}

IL_0027:
	{
		goto IL_004e;
	}

IL_004e:
	{
	}
	{
		return (uint16_t)1;
	}
}
// Method Definition Index: 9168
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_002b;
	}

IL_002b:
	{
		goto IL_0056;
	}

IL_0056:
	{
	}
	{
		uint16_t L_0;
		L_0 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		return L_0;
	}
}
// Method Definition Index: 9149
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0 = ((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_count;
		return L_0;
	}
}
// Method Definition Index: 9157
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mE275DCDE4DC3B6FB30AB80ACEAC8363207BA9BEC_inline (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_obj;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27(__this, ((*(Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_2;
	}
}
// Method Definition Index: 9166
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m73081D1B852400C74618D0A814BBED2FE272175D_inline (uint64_t ___0_left, uint64_t ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0034;
	}

IL_0034:
	{
		goto IL_0068;
	}

IL_0068:
	{
		goto IL_009c;
	}

IL_009c:
	{
		goto IL_00d0;
	}

IL_00d0:
	{
		goto IL_0104;
	}

IL_0104:
	{
		goto IL_0138;
	}

IL_0138:
	{
	}
	{
		uint64_t L_0 = ___0_left;
		uint64_t L_1 = ___1_right;
		return (bool)((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
	}
}
// Method Definition Index: 9162
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mD4D4AE7733CACE50CA2FCFFFB0A16818EEC01293_inline (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_left, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	//<source_info:<no-source>:1>
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_0 = ___1_right;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27((&___0_left), L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_1;
	}
}
// Method Definition Index: 9167
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Vector_1_GetOneValue_mE2DE5D8CFC8D7A4990743C160CD1C4ED71CDA288_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0027;
	}

IL_0027:
	{
		goto IL_004e;
	}

IL_004e:
	{
		goto IL_0075;
	}

IL_0075:
	{
		goto IL_009c;
	}

IL_009c:
	{
		goto IL_00c3;
	}

IL_00c3:
	{
		goto IL_00ea;
	}

IL_00ea:
	{
	}
	{
		int64_t L_0 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		return L_0;
	}
}
// Method Definition Index: 9168
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Vector_1_GetAllBitsSetValue_m99E582A6A7DA5089B26FE42E5F8FDE26A6005ED0_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_002b;
	}

IL_002b:
	{
		goto IL_0056;
	}

IL_0056:
	{
		goto IL_0081;
	}

IL_0081:
	{
		goto IL_00ac;
	}

IL_00ac:
	{
		goto IL_00d7;
	}

IL_00d7:
	{
		goto IL_0102;
	}

IL_0102:
	{
	}
	{
		uint64_t L_0;
		L_0 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		return L_0;
	}
}
