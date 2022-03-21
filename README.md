<h1 class="gap" style="box-sizing: border-box; font-size: 36px; margin-top: 50px !important; margin-right: 0px; margin-bottom: 10px; margin-left: 0px; font-family: aktiv-grotesk, sans-serif; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">0x11. C - printf</h1>
<h2 class="gap" style="box-sizing: border-box; font-family: aktiv-grotesk, sans-serif; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 50px !important; margin-bottom: 10px; font-size: 30px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">Tasks</h2>
<div data-position="1" data-role="task968" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">0. I&apos;m not going anywhere. You can print that wherever you want to. I&apos;m here and I&apos;m a Spur for life</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a function that produces output according to a format.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Prototype: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>int _printf(const char *format, ...);</code></li>
                <li style="box-sizing: border-box;">Returns: the number of characters printed (excluding the null byte used to nd output to strings)</li>
                <li style="box-sizing: border-box;">write output to stdout, the standard output stream</li>
                <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>format</code> is a character string. The format string is composed of zero or more directives. See <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>man 3 printf</code>for more detail. You need to handle the following conversion specifiers:<ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 0px;">
                        <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>c</code></li>
                        <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>s</code></li>
                        <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>%</code></li>
                    </ul>
                </li>
                <li style="box-sizing: border-box;">You don&rsquo;t have to reproduce the buffer handling of the C library <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code> function</li>
                <li style="box-sizing: border-box;">You don&rsquo;t have to handle the flag characters</li>
                <li style="box-sizing: border-box;">You don&rsquo;t have to handle field width</li>
                <li style="box-sizing: border-box;">You don&rsquo;t have to handle precision</li>
                <li style="box-sizing: border-box;">You don&rsquo;t have to handle the length modifiers</li>
            </ul>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="2" data-role="task983" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">1. Education is when you read the fine print. Experience is what you get if you don&apos;t</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Handle the following conversion specifiers:</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>d</code></li>
                <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>i</code></li>
                <li style="box-sizing: border-box;">You don&rsquo;t have to handle the flag characters</li>
                <li style="box-sizing: border-box;">You don&rsquo;t have to handle field width</li>
                <li style="box-sizing: border-box;">You don&rsquo;t have to handle precision</li>
                <li style="box-sizing: border-box;">You don&rsquo;t have to handle the length modifiers</li>
            </ul>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="3" data-role="task969" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">2. Just because it&apos;s in print doesn&apos;t mean it&apos;s the gospel</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Create a man page for your function.</p>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code></li>
                    <li style="box-sizing: border-box;">File: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>man_3_printf</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="4" data-role="task970" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">3. With a face like mine, I do better in print</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">#advanced</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Handle the following custom conversion specifiers:</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>b</code>: the unsigned int argument is converted to binary</li>
            </ul>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="5" data-role="task984" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">4. What one has not experienced, one will never understand in print</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">#advanced</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Handle the following conversion specifiers:</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>u</code></li>
                <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>o</code></li>
                <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>x</code></li>
                <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>X</code></li>
                <li style="box-sizing: border-box;">You don&rsquo;t have to handle the flag characters</li>
                <li style="box-sizing: border-box;">You don&rsquo;t have to handle field width</li>
                <li style="box-sizing: border-box;">You don&rsquo;t have to handle precision</li>
                <li style="box-sizing: border-box;">You don&rsquo;t have to handle the length modifiers</li>
            </ul>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="6" data-role="task981" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">5. Nothing in fine print is ever good news</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">#advanced</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Use a local buffer of 1024 chars in order to call <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>write</code> as little as possible.</p>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="7" data-role="task971" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">7. My weakness is wearing too much leopard print</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">#advanced</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Handle the following custom conversion specifier:</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>S</code> : prints the string.</li>
                <li style="box-sizing: border-box;">Non printable characters (0 &lt; ASCII value &lt; 32 or &gt;= 127) are printed this way: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>\x</code>, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)</li>
            </ul>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="7" data-role="task974" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">#advanced</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Handle the following conversion specifier: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>p</code>.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">You don&rsquo;t have to handle the flag characters</li>
                <li style="box-sizing: border-box;">You don&rsquo;t have to handle field width</li>
                <li style="box-sizing: border-box;">You don&rsquo;t have to handle precision</li>
                <li style="box-sizing: border-box;">You don&rsquo;t have to handle the length modifiers</li>
            </ul>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="8" data-role="task975" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">8. The big print gives and the small print takes away</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">#advanced</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Handle the following flag characters for non-custom conversion specifiers:</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>+</code></li>
                <li style="box-sizing: border-box;">space</li>
                <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>#</code></li>
            </ul>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="9" data-role="task976" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">9. Sarcasm is lost in print</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">#advanced</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Handle the following length modifiers for non-custom conversion specifiers:</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>l</code></li>
                <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>h</code></li>
            </ul>
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Conversion specifiers to handle: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>d</code>, <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>i</code>, <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>u</code>, <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>o</code>, <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>x</code>, <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>X</code></p>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="10" data-role="task977" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">10. Print some money and give it to us for the rain forests</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">#advanced</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Handle the field width for non-custom conversion specifiers.</p>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="11" data-role="task978" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">11. The negative is the equivalent of the composer&apos;s score, and the print the performance</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">#advanced</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Handle the precision for non-custom conversion specifiers.</p>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="12" data-role="task979" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">12. It&apos;s depressing when you&apos;re still around and your albums are out of print</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">#advanced</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Handle the <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0</code> flag character for non-custom conversion specifiers.</p>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="13" data-role="task980" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">#advanced</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Handle the <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>-</code> flag character for non-custom conversion specifiers.</p>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="14" data-role="task972" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">14. Print is the sharpest and the strongest weapon of our party</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">#advanced</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Handle the following custom conversion specifier:</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>r</code> : prints the reversed string</li>
            </ul>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="15" data-role="task973" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">15. The flood of print has turned reading into a process of gulping rather than savoring</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">#advanced</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Handle the following custom conversion specifier:</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>R</code>: prints the rot13&apos;ed string</li>
            </ul>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="16" data-role="task982" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">16. *</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">#advanced</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">All the above options work well together.</p>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>e
