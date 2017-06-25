package com.lleclerc.jnilink;

public class SayHelloMain {

	static {
		System.loadLibrary("libAnswerHelloMinGWSharedLib");
	}

	private native String sayHello(String name);

	public static void main(String[] args) {
		System.out.println("Main - Start");
//		System.out.println("Main - " + new SayHelloMain().sayHello("Bob"));
		System.out.println("Main - End");
	}

}
