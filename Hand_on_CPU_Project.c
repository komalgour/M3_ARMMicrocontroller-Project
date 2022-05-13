<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<?fileVersion 4.0.0?><cproject storage_type_id="org.eclipse.cdt.core.XmlProjectDescriptionStorage">
	<storageModule moduleId="org.eclipse.cdt.core.settings">
		<cconfiguration id="com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.887507777">
			<storageModule buildSystemId="org.eclipse.cdt.managedbuilder.core.configurationDataProvider" id="com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.887507777" moduleId="org.eclipse.cdt.core.settings" name="Debug">
				<externalSettings/>
				<extensions>
					<extension id="org.eclipse.cdt.core.ELF" point="org.eclipse.cdt.core.BinaryParser"/>
					<extension id="org.eclipse.cdt.core.GASErrorParser" point="org.eclipse.cdt.core.ErrorParser"/>
					<extension id="org.eclipse.cdt.core.GmakeErrorParser" point="org.eclipse.cdt.core.ErrorParser"/>
					<extension id="org.eclipse.cdt.core.GLDErrorParser" point="org.eclipse.cdt.core.ErrorParser"/>
					<extension id="org.eclipse.cdt.core.CWDLocator" point="org.eclipse.cdt.core.ErrorParser"/>
					<extension id="org.eclipse.cdt.core.GCCErrorParser" point="org.eclipse.cdt.core.ErrorParser"/>
				</extensions>
			</storageModule>
			<storageModule moduleId="cdtBuildSystem" version="4.0.0">
				<configuration artifactExtension="elf" artifactName="${ProjName}" buildArtefactType="org.eclipse.cdt.build.core.buildArtefactType.exe" buildProperties="org.eclipse.cdt.build.core.buildArtefactType=org.eclipse.cdt.build.core.buildArtefactType.exe,org.eclipse.cdt.build.core.buildType=org.eclipse.cdt.build.core.buildType.debug" cleanCommand="rm -rf" description="" id="com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.887507777" name="Debug" parent="com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug">
					<folderInfo id="com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.887507777." name="/" resourcePath="">
						<toolChain id="com.st.stm32cube.ide.mcu.gnu.managedbuild.toolchain.exe.debug.173301682" name="MCU ARM GCC" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.toolchain.exe.debug">
							<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.target_mcu.304550969" name="MCU" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.target_mcu" useByScannerDiscovery="true" value="STM32F103C6Tx" valueType="string"/>
							<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.target_cpuid.1444908854" name="CPU" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.target_cpuid" useByScannerDiscovery="false" value="0" valueType="string"/>
							<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.target_coreid.1347592899" name="Core" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.target_coreid" useByScannerDiscovery="false" value="0" valueType="string"/>
							<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.target_board.290161855" name="Board" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.target_board" useByScannerDiscovery="false" value="genericBoard" valueType="string"/>
							<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.defaults.207392301" name="Defaults" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.defaults" useByScannerDiscovery="false" value="com.st.stm32cube.ide.common.services.build.inputs.revA.1.0.5 || Debug || true || Executable || com.st.stm32cube.ide.mcu.gnu.managedbuild.option.toolchain.value.workspace || STM32F103C6Tx || 0 || 0 || arm-none-eabi- || ${gnu_tools_for_stm32_compiler_path} || ../Drivers/CMSIS/Device/ST/STM32F1xx/Include | ../Drivers/CMSIS/Include | ../Core/Inc | ../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy | ../Drivers/STM32F1xx_HAL_Driver/Inc ||  ||  || USE_HAL_DRIVER | STM32F103x6 ||  || Drivers | Core/Startup | Core ||  ||  || ${workspace_loc:/${ProjName}/STM32F103C6TX_FLASH.ld} || true || NonSecure ||  || secure_nsclib.o ||  || None || " valueType="string"/>
							<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.converthex.1642455367" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.converthex" useByScannerDiscovery="false" value="true" valueType="boolean"/>
							<targetPlatform archList="all" binaryParser="org.eclipse.cdt.core.ELF" id="com.st.stm32cube.ide.mcu.gnu.managedbuild.targetplatform.2107845743" isAbstract="false" osList="all" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.targetplatform"/>
							<builder buildPath="${workspace_loc:/Project1}/Debug" id="com.st.stm32cube.ide.mcu.gnu.managedbuild.builder.1578782086" keepEnvironmentInBuildfile="false" managedBuildOn="true" name="Gnu Make Builder" parallelBuildOn="true" parallelizationNumber="optimal" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.builder"/>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.assembler.2036359999" name="MCU GCC Assembler" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.assembler">
								<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.assembler.option.debuglevel.1276645853" name="Debug level" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.assembler.option.debuglevel" value="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.assembler.option.debuglevel.value.g3" valueType="enumerated"/>
								<option IS_BUILTIN_EMPTY="false" IS_VALUE_EMPTY="false" id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.assembler.option.definedsymbols.1131574637" name="Define symbols (-D)" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.assembler.option.definedsymbols" valueType="definedSymbols">
									<listOptionValue builtIn="false" value="DEBUG"/>
								</option>
								<inputType id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.assembler.input.964091356" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.assembler.input"/>
							</tool>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.924309086" name="MCU GCC Compiler" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler">
								<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.option.debuglevel.1248802157" name="Debug level" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.option.debuglevel" useByScannerDiscovery="false" value="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.option.debuglevel.value.g3" valueType="enumerated"/>
								<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.option.optimization.level.317487872" name="Optimization level" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.option.optimization.level" useByScannerDiscovery="false"/>
								<option IS_BUILTIN_EMPTY="false" IS_VALUE_EMPTY="false" id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.option.definedsymbols.351429471" name="Define symbols (-D)" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.option.definedsymbols" useByScannerDiscovery="false" valueType="definedSymbols">
									<listOptionValue builtIn="false" value="DEBUG"/>
									<listOptionValue builtIn="false" value="USE_HAL_DRIVER"/>
									<listOptionValue builtIn="false" value="STM32F103x6"/>
								</option>
								<option IS_BUILTIN_EMPTY="false" IS_VALUE_EMPTY="false" id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.option.includepaths.1373828854" name="Include paths (-I)" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.option.includepaths" useByScannerDiscovery="false" valueType="includePath">
									<listOptionValue builtIn="false" value="../Core/Inc"/>
									<listOptionValue builtIn="false" value="../Drivers/STM32F1xx_HAL_Driver/Inc"/>
									<listOptionValue builtIn="false" value="../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy"/>
									<listOptionValue builtIn="false" value="../Drivers/CMSIS/Device/ST/STM32F1xx/Include"/>
									<listOptionValue builtIn="false" value="../Drivers/CMSIS/Include"/>
								</option>
								<inputType id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.input.c.1245670412" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.input.c"/>
							</tool>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.cpp.compiler.745355203" name="MCU G++ Compiler" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.cpp.compiler">
								<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.cpp.compiler.option.debuglevel.2124464310" name="Debug level" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.cpp.compiler.option.debuglevel" useByScannerDiscovery="false" value="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.cpp.compiler.option.debuglevel.value.g3" valueType="enumerated"/>
								<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.cpp.compiler.option.optimization.level.1356964726" name="Optimization level" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.cpp.compiler.option.optimization.level" useByScannerDiscovery="false"/>
							</tool>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.linker.1808931224" name="MCU GCC Linker" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.linker">
								<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.linker.option.script.500000880" name="Linker Script (-T)" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.linker.option.script" value="${workspace_loc:/${ProjName}/STM32F103C6TX_FLASH.ld}" valueType="string"/>
								<inputType id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.linker.input.420112411" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.linker.input">
									<additionalInput kind="additionalinputdependency" paths="$(USER_OBJS)"/>
									<additionalInput kind="additionalinput" paths="$(LIBS)"/>
								</inputType>
							</tool>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.cpp.linker.999356492" name="MCU G++ Linker" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.cpp.linker"/>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.archiver.1380415158" name="MCU GCC Archiver" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.archiver"/>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.size.1955791633" name="MCU Size" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.size"/>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objdump.listfile.668170319" name="MCU Output Converter list file" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objdump.listfile"/>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objcopy.hex.1721739738" name="MCU Output Converter Hex" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objcopy.hex"/>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objcopy.binary.236560362" name="MCU Output Converter Binary" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objcopy.binary"/>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objcopy.verilog.731369406" name="MCU Output Converter Verilog" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objcopy.verilog"/>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objcopy.srec.116100360" name="MCU Output Converter Motorola S-rec" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objcopy.srec"/>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objcopy.symbolsrec.91790902" name="MCU Output Converter Motorola S-rec with symbols" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objcopy.symbolsrec"/>
						</toolChain>
					</folderInfo>
					<sourceEntries>
						<entry flags="VALUE_WORKSPACE_PATH|RESOLVED" kind="sourcePath" name="Core"/>
						<entry flags="VALUE_WORKSPACE_PATH|RESOLVED" kind="sourcePath" name="Drivers"/>
					</sourceEntries>
				</configuration>
			</storageModule>
			<storageModule moduleId="org.eclipse.cdt.core.externalSettings"/>
		</cconfiguration>
		<cconfiguration id="com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.release.1618067132">
			<storageModule buildSystemId="org.eclipse.cdt.managedbuilder.core.configurationDataProvider" id="com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.release.1618067132" moduleId="org.eclipse.cdt.core.settings" name="Release">
				<externalSettings/>
				<extensions>
					<extension id="org.eclipse.cdt.core.ELF" point="org.eclipse.cdt.core.BinaryParser"/>
					<extension id="org.eclipse.cdt.core.GASErrorParser" point="org.eclipse.cdt.core.ErrorParser"/>
					<extension id="org.eclipse.cdt.core.GmakeErrorParser" point="org.eclipse.cdt.core.ErrorParser"/>
					<extension id="org.eclipse.cdt.core.GLDErrorParser" point="org.eclipse.cdt.core.ErrorParser"/>
					<extension id="org.eclipse.cdt.core.CWDLocator" point="org.eclipse.cdt.core.ErrorParser"/>
					<extension id="org.eclipse.cdt.core.GCCErrorParser" point="org.eclipse.cdt.core.ErrorParser"/>
				</extensions>
			</storageModule>
			<storageModule moduleId="cdtBuildSystem" version="4.0.0">
				<configuration artifactExtension="elf" artifactName="${ProjName}" buildArtefactType="org.eclipse.cdt.build.core.buildArtefactType.exe" buildProperties="org.eclipse.cdt.build.core.buildArtefactType=org.eclipse.cdt.build.core.buildArtefactType.exe,org.eclipse.cdt.build.core.buildType=org.eclipse.cdt.build.core.buildType.release" cleanCommand="rm -rf" description="" id="com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.release.1618067132" name="Release" parent="com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.release">
					<folderInfo id="com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.release.1618067132." name="/" resourcePath="">
						<toolChain id="com.st.stm32cube.ide.mcu.gnu.managedbuild.toolchain.exe.release.224850134" name="MCU ARM GCC" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.toolchain.exe.release">
							<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.target_mcu.908403921" name="MCU" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.target_mcu" useByScannerDiscovery="true" value="STM32F103C6Tx" valueType="string"/>
							<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.target_cpuid.495696723" name="CPU" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.target_cpuid" useByScannerDiscovery="false" value="0" valueType="string"/>
							<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.target_coreid.550577236" name="Core" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.target_coreid" useByScannerDiscovery="false" value="0" valueType="string"/>
							<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.target_board.1745326415" name="Board" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.target_board" useByScannerDiscovery="false" value="genericBoard" valueType="string"/>
							<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.defaults.1065780978" name="Defaults" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.option.defaults" useByScannerDiscovery="false" value="com.st.stm32cube.ide.common.services.build.inputs.revA.1.0.5 || Release || false || Executable || com.st.stm32cube.ide.mcu.gnu.managedbuild.option.toolchain.value.workspace || STM32F103C6Tx || 0 || 0 || arm-none-eabi- || ${gnu_tools_for_stm32_compiler_path} || ../Drivers/CMSIS/Device/ST/STM32F1xx/Include | ../Drivers/CMSIS/Include | ../Core/Inc | ../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy | ../Drivers/STM32F1xx_HAL_Driver/Inc ||  ||  || USE_HAL_DRIVER | STM32F103x6 ||  || Drivers | Core/Startup | Core ||  ||  || ${workspace_loc:/${ProjName}/STM32F103C6TX_FLASH.ld} || true || NonSecure ||  || secure_nsclib.o ||  || None || " valueType="string"/>
							<targetPlatform archList="all" binaryParser="org.eclipse.cdt.core.ELF" id="com.st.stm32cube.ide.mcu.gnu.managedbuild.targetplatform.29407011" isAbstract="false" osList="all" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.targetplatform"/>
							<builder buildPath="${workspace_loc:/Project1}/Release" id="com.st.stm32cube.ide.mcu.gnu.managedbuild.builder.1289999909" keepEnvironmentInBuildfile="false" managedBuildOn="true" name="Gnu Make Builder" parallelBuildOn="true" parallelizationNumber="optimal" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.builder"/>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.assembler.270292158" name="MCU GCC Assembler" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.assembler">
								<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.assembler.option.debuglevel.2024614129" name="Debug level" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.assembler.option.debuglevel" value="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.assembler.option.debuglevel.value.g0" valueType="enumerated"/>
								<inputType id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.assembler.input.1796466368" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.assembler.input"/>
							</tool>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.1343632085" name="MCU GCC Compiler" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler">
								<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.option.debuglevel.1112290587" name="Debug level" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.option.debuglevel" useByScannerDiscovery="false" value="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.option.debuglevel.value.g0" valueType="enumerated"/>
								<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.option.optimization.level.1082947656" name="Optimization level" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.option.optimization.level" useByScannerDiscovery="false" value="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.option.optimization.level.value.os" valueType="enumerated"/>
								<option IS_BUILTIN_EMPTY="false" IS_VALUE_EMPTY="false" id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.option.definedsymbols.1274414891" name="Define symbols (-D)" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.option.definedsymbols" useByScannerDiscovery="false" valueType="definedSymbols">
									<listOptionValue builtIn="false" value="USE_HAL_DRIVER"/>
									<listOptionValue builtIn="false" value="STM32F103x6"/>
								</option>
								<option IS_BUILTIN_EMPTY="false" IS_VALUE_EMPTY="false" id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.option.includepaths.2033199136" name="Include paths (-I)" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.option.includepaths" useByScannerDiscovery="false" valueType="includePath">
									<listOptionValue builtIn="false" value="../Core/Inc"/>
									<listOptionValue builtIn="false" value="../Drivers/STM32F1xx_HAL_Driver/Inc"/>
									<listOptionValue builtIn="false" value="../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy"/>
									<listOptionValue builtIn="false" value="../Drivers/CMSIS/Device/ST/STM32F1xx/Include"/>
									<listOptionValue builtIn="false" value="../Drivers/CMSIS/Include"/>
								</option>
								<inputType id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.input.c.1945890327" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.input.c"/>
							</tool>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.cpp.compiler.1590535136" name="MCU G++ Compiler" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.cpp.compiler">
								<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.cpp.compiler.option.debuglevel.280445092" name="Debug level" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.cpp.compiler.option.debuglevel" useByScannerDiscovery="false" value="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.cpp.compiler.option.debuglevel.value.g0" valueType="enumerated"/>
								<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.cpp.compiler.option.optimization.level.778624793" name="Optimization level" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.cpp.compiler.option.optimization.level" useByScannerDiscovery="false" value="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.cpp.compiler.option.optimization.level.value.os" valueType="enumerated"/>
							</tool>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.linker.1699006983" name="MCU GCC Linker" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.linker">
								<option id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.linker.option.script.2046749103" name="Linker Script (-T)" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.linker.option.script" value="${workspace_loc:/${ProjName}/STM32F103C6TX_FLASH.ld}" valueType="string"/>
								<inputType id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.linker.input.382209322" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.linker.input">
									<additionalInput kind="additionalinputdependency" paths="$(USER_OBJS)"/>
									<additionalInput kind="additionalinput" paths="$(LIBS)"/>
								</inputType>
							</tool>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.cpp.linker.74692112" name="MCU G++ Linker" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.cpp.linker"/>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.archiver.1567698463" name="MCU GCC Archiver" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.archiver"/>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.size.1603204647" name="MCU Size" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.size"/>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objdump.listfile.25867811" name="MCU Output Converter list file" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objdump.listfile"/>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objcopy.hex.403123906" name="MCU Output Converter Hex" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objcopy.hex"/>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objcopy.binary.1878101137" name="MCU Output Converter Binary" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objcopy.binary"/>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objcopy.verilog.59603328" name="MCU Output Converter Verilog" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objcopy.verilog"/>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objcopy.srec.4990468" name="MCU Output Converter Motorola S-rec" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objcopy.srec"/>
							<tool id="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objcopy.symbolsrec.1621356434" name="MCU Output Converter Motorola S-rec with symbols" superClass="com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.objcopy.symbolsrec"/>
						</toolChain>
					</folderInfo>
					<sourceEntries>
						<entry flags="VALUE_WORKSPACE_PATH|RESOLVED" kind="sourcePath" name="Core"/>
						<entry flags="VALUE_WORKSPACE_PATH|RESOLVED" kind="sourcePath" name="Drivers"/>
					</sourceEntries>
				</configuration>
			</storageModule>
			<storageModule moduleId="org.eclipse.cdt.core.externalSettings"/>
		</cconfiguration>
	</storageModule>
	<storageModule moduleId="org.eclipse.cdt.core.pathentry"/>
	<storageModule moduleId="cdtBuildSystem" version="4.0.0">
		<project id="Project1.null.972995401" name="Project1"/>
	</storageModule>
	<storageModule moduleId="org.eclipse.cdt.core.LanguageSettingsProviders"/>
	<storageModule moduleId="org.eclipse.cdt.make.core.buildtargets"/>
	<storageModule moduleId="scannerConfiguration">
		<autodiscovery enabled="true" problemReportingEnabled="true" selectedProfileId=""/>
		<scannerConfigBuildInfo instanceId="com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.887507777;com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.887507777.;com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.924309086;com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.input.c.1245670412">
			<autodiscovery enabled="false" problemReportingEnabled="true" selectedProfileId=""/>
		</scannerConfigBuildInfo>
		<scannerConfigBuildInfo instanceId="com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.release.1618067132;com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.release.1618067132.;com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.1343632085;com.st.stm32cube.ide.mcu.gnu.managedbuild.tool.c.compiler.input.c.1945890327">
			<autodiscovery enabled="false" problemReportingEnabled="true" selectedProfileId=""/>
		</scannerConfigBuildInfo>
	</storageModule>
	<storageModule moduleId="refreshScope" versionNumber="2">
		<configuration configurationName="Debug">
			<resource resourceType="PROJECT" workspacePath="/Project1"/>
		</configuration>
		<configuration configurationName="Release">
			<resource resourceType="PROJECT" workspacePath="/Project1"/>
		</configuration>
	</storageModule>
</cproject>
