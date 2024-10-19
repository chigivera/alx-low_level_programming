export default function Component() {
  return (
    <div className="max-w-2xl mx-auto p-4">
      <h1 className="text-3xl font-bold mb-4">0x18. C - Dynamic libraries</h1>
      
      <h2 className="text-2xl font-semibold mt-6 mb-2">Files in this project:</h2>
      <ul className="list-disc pl-5 space-y-2">
        <li><code>libdynamic.so</code>: Dynamic library containing various C functions</li>
        <li><code>main.h</code>: Header file with function prototypes</li>
        <li><code>1-create_dynamic_lib.sh</code>: Shell script to create a dynamic library from all .c files</li>
        <li><code>100-operations.so</code>: Dynamic library with C functions callable from Python</li>
        <li><code>101-make_me_win.sh</code>: Shell script for the Giga Millions challenge</li>
      </ul>
      
      <h2 className="text-2xl font-semibold mt-6 mb-2">C Files (function implementations):</h2>
      <ul className="list-disc pl-5 space-y-2">
        <li><code>_putchar.c</code></li>
        <li><code>_islower.c</code></li>
        <li><code>_isalpha.c</code></li>
        <li><code>_abs.c</code></li>
        <li><code>_isupper.c</code></li>
        <li><code>_isdigit.c</code></li>
        <li><code>_strlen.c</code></li>
        <li><code>_puts.c</code></li>
        <li><code>_strcpy.c</code></li>
        <li><code>_atoi.c</code></li>
        <li><code>_strcat.c</code></li>
        <li><code>_strncat.c</code></li>
        <li><code>_strncpy.c</code></li>
        <li><code>_strcmp.c</code></li>
        <li><code>_memset.c</code></li>
        <li><code>_memcpy.c</code></li>
        <li><code>_strchr.c</code></li>
        <li><code>_strspn.c</code></li>
        <li><code>_strpbrk.c</code></li>
        <li><code>_strstr.c</code></li>
      </ul>
      
      <h2 className="text-2xl font-semibold mt-6 mb-2">Additional files for advanced tasks:</h2>
      <ul className="list-disc pl-5 space-y-2">
        <li><code>100-operations.c</code>: C file with functions for the Python-callable library</li>
        <li><code>101-md5_gm</code>: MD5 hash of the gm program (for reference in the Giga Millions challenge)</li>
      </ul>
    </div>
  )
}