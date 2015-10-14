# Word to Wolfram

This is a simple C app to convert MS Word style matrices such as:

    |■(14&3&8@5&1&-2@0&11&0)|

into WolframAlpha style matrices such as:

    {{14,3,8},{5,1,-2},{0,11,0}}


This app has no error checking or help at the moment. It simply exists to
quickly allow me to copy a Word matrix and paste it into WolframAlpha.

Run it like:

    ./word_to_wolfram '|■(14&3&8@5&1&-2@0&11&0)|'

For easier usage on a Mac:

    ./word_to_wolfram '|■(14&3&8@5&1&-2@0&11&0)|' |pbcopy
