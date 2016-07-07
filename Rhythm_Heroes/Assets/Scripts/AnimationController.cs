using UnityEngine;
using System.Collections;

public class AnimationController : MonoBehaviour {
	private GameObject ribbonEffect, effect1, effect2, leftEff, rightEff, leftP, rightP, leftBubble, rightBubble, green;
	private ParticleSystem ribbon, particle1, particle2, leftPar, rightPar, leftBubblePar, rightBubblePar, greenPar;
	private Animator leftAnim, rightAnim;

	// Use this for initialization
	void Start () {
		
		ribbonEffect = GameObject.Find ("ribbon");
		effect1 = GameObject.Find ("eff1");
		effect2 = GameObject.Find ("eff2");
		leftEff = GameObject.Find ("leftEff");
		rightEff = GameObject.Find ("rightEff");
		leftP = GameObject.Find ("leftPlane");
		rightP = GameObject.Find ("rightPlane");
		green = GameObject.Find ("GreenCore");
		leftBubble = GameObject.Find ("leftBubble");
		rightBubble = GameObject.Find ("rightBubble");

		ribbon = ribbonEffect.GetComponent<ParticleSystem> ();
		particle1 = effect1.GetComponent<ParticleSystem> ();
		particle2 = effect2.GetComponent<ParticleSystem> ();
		leftPar = leftEff.GetComponent<ParticleSystem> ();
		rightPar = rightEff.GetComponent<ParticleSystem> ();
		leftAnim = leftP.GetComponent<Animator> ();
		rightAnim = rightP.GetComponent<Animator> ();
		greenPar = green.GetComponent<ParticleSystem> ();
		leftBubblePar = leftBubble.GetComponent<ParticleSystem> ();
		rightBubblePar = rightBubble.GetComponent<ParticleSystem> ();
	}

	public void changePlaneAni (bool change) {
		if (change) {
			leftAnim.SetTrigger ("redFlashing");	
			rightAnim.SetTrigger ("redFlashing");
		} else {
			leftAnim.SetTrigger ("blueFlashing");
			rightAnim.SetTrigger ("blueFlashing");
		}
	}

	public void particleEmit() {
		particle1.Play ();
		leftPar.Play ();
		rightPar.Play ();
	}

	public void particleEmit1() {
		particle2.Play ();
	}

	public void particleEmit2() {
		leftBubblePar.Play ();
		rightBubblePar.Play ();
		ribbon.Play ();
	}

	public void emitGreenCore() {
		greenPar.Play ();
	}
}
