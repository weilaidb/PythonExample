package com.sleepycat.persist.model;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.lang.instrument.ClassFileTransformer;
import java.lang.instrument.Instrumentation;
import java.security.ProtectionDomain;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import java.util.StringTokenizer;
import com.sleepycat.asm.ClassReader;
import com.sleepycat.asm.ClassVisitor;
import com.sleepycat.asm.ClassWriter;
public class ClassEnhancer implements ClassFileTransformer
