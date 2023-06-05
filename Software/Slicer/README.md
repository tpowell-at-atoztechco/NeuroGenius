<h1>3D Slicer</h1>
<h2>Image computing platform</h2>
<p>3D Slicer is an open-source application designed to open and interpret MRI data, allowing you to apply patterns and create your own database of MRI files. Upon installation, one of the first things you'll see is that it's not, "designed for clinical use." With that said, it is incorporated into many similiar softwares used professionally and internationally</p><p>3D SLicer can be downloaded from <a href="https://download.slicer.org/">https://download.slicer.org/</a> for Windows, Mac OS, and Linux, completely free of charge.</p><p>For compatibility purposes, we're including a copy of the SLicer installer in this repository. All of these are current as of June 5th, 2023.</p>
<p>Slicer is built and tested on many hardware and software platforms. 3D Slicer runs on modern Windows, macOS, and a variety of Linux distributions.<p>
<h3>Operating System</h3>
<ul>
<li>Windows: Windows 10 or 11, with all recommended updates installed. Windows 10 Version 1903 (May 2019 Update) version or later is required for support of international characters (UTF-8) in filenames and text. Microsoft does not support Windows 8.1 and Windows 7 anymore and Slicer is not tested on these legacy operating system versions, but may still work.</li>
<li>macOS: macOS Big Sur (11) or later (both Intel and ARM based systems). Latest public release is recommended.</li>
<li>Linux: Ubuntu 18.04 or later<br/>
CentOS 7 or later. Latest LTS (Long-term-support) version is recommended.</li>
</ul>
<h3>Hardware</h3>
<ul>
<li>Memory: more than 4GB (8 or more is recommended). As a general rule, have 10x more memory than the amount of data that you load.</li>
<li>Display: a minimum resolution of 1024 by 768 (1280 by 1024 or better is recommended).</li>
<li>Graphics: Dedicated graphics hardware (discrete GPU) memory is recommended for fast volume rendering. GPU: Graphics must support minimum OpenGL 3.2. Integrated graphics card is sufficient for basic visualization. Discrete graphics card (such as NVidia GPU) is recommended for interactive 3D volume rendering and fast rendering of complex scenes. GPU texture memory (VRAM) should be larger than your largest dataset (e.g., working with 2GB data, get VRAM > 4GB) and check that your images fit in maximum texture dimensions of your GPU hardware. Except rendering, most calculations are performed on CPU, therefore having a faster GPU will generally not impact the overall speed of the application.</li>
<li>Some computations in 3D Slicer are multi-threaded and will benefit from multi core, multi CPU configurations.</li>
<li>Interface device: a three button mouse with scroll wheel is recommended. Pen, multi-touchscreen, touchpad, and graphic tablet are supported. All OpenVR-compatible virtual reality headsets are supported for virtual reality display.</li>
<li>Internet connection to access extensions, Python packages, online documentation, sample data sets, and tutorials.</li>
</ul>