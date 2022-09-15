// a function that gets a text from gpt-3
const { OpenAI } = require('openai-api');
const openai = new OpenAI(process.env.OPENAI_API_KEY);
const prompt = "The following is a conversation with an AI assistant. The assistant is helpful, creative, clever, and very friendly.\n\nHuman: Hello, who are you?\nAI: I am an AI created by OpenAI. How can I help you today?\n";
const maxTokens = 5;
const temperature = 0.9;
const topP = 1;
const presencePenalty = 0.0;
const frequencyPenalty = 0;
const bestOf = 1;
const n = 1;
const stream = false;
const stop = ["\n", " Human:", " AI:"];
const logprobs = null;
const echo = false;
const logitBias = null;

const response = await openai.complete({
    engine: 'davinci',
    prompt,
    maxTokens,
    temperature,
    topP,
    presencePenalty,
    frequencyPenalty,
    bestOf,
    n,
    stream,
    stop,
    logprobs,
    echo,
    logitBias
});

console.log(response.data.choices[0].text);






