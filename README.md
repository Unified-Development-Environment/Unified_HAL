# Unified_HAL
A common HAL for embedded systems spanning multiple architectures and vendors.  

## Introduction of Idea

HAL or Hardware Abstraction Layer is a fundamental modularity & abstraction principle implemented in software, between the physical hardware of a computer and the software that runs on that computer. It plays a crucial role in abstracting the specificities of target hardware and peripherals, and allows software to be written that is modular and non-redundant, and hence much less error-prone and widely compatible across different systems. 

Being such a critical component, HAL is majorly implemented by most embedded system and microcontroller manufacturers, in their own flavors. While having multiple variants of HAL hasn’t been an issue to the average developer, as with most domains interaction is abstracted away to the overlying operating system; for low-level domains, like embedded systems, the underlying HAL plays a crucial role in the code design, portability and overall efficiency.

Having a unified HAL is highly beneficial to embedded programmers, and as a testament to that, modern low-level languages like RUST, while implementing HAL have taken that very approach. However, for the majority of embedded programming that exists in the C/CPP domain, it’s on the developer to pick up and understand the underlying HAL for each device from a different vendor. Most code written for commercial embedded devices or even hobbyist projects are inherently, highly reusable. Majority of the code, say on a microcontroller of a smart-fridge will easily extend to an updated iteration of the product, with minor additions to the functionalities. And yet, porting to an alternative system constitutes of retraining the team and rewriting the entire codebase from scratch, leading to unfortunate vendor lock-ins. In rapidly evolving domains such as IoT and the Industry 4.0, this bottleneck can significantly hinder the overall progress.

The goal of creating a visual programming environment, along with a unified HAL is to offer an accessible and intuitive approach to embedded programming. With the help of visual interfaces and drag-and-drop tools, even those without technical programming knowledge can easily create programs. Unified HAL, on the other hand, allows seasoned developers to focus on the rationale and functionality of their application rather than technical minutiae, thus simplifying the development lifecycle, enhancing portability, and reducing the complexity of embedded programming.

