struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

}

void RegisterAllClasses()
{
	//Total: 50 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//4. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//5. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//6. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//7. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//8. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//9. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//10. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//11. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//12. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//13. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//14. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//15. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//16. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//17. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//18. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//19. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//20. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//21. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//22. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//23. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//24. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//25. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//26. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//27. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//28. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//29. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//30. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//31. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//32. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//33. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//34. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//35. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//36. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//37. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//38. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//39. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//40. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//41. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//42. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//43. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//44. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//45. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//46. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//47. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//48. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//49. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
