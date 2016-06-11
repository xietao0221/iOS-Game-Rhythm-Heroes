struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

}

void RegisterAllClasses()
{
	//Total: 56 classes
	//0. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//4. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//5. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//6. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//7. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//8. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//9. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//10. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//11. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//12. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//13. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//14. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//15. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//16. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//17. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//18. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//19. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//20. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//21. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//22. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//23. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//24. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//25. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//26. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//27. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//28. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//29. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//30. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//31. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//32. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//33. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//34. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//35. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//36. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//37. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//38. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//39. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//40. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//41. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//42. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//43. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//44. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//45. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//46. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//47. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//48. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//49. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//50. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//51. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//52. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//53. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//54. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//55. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
