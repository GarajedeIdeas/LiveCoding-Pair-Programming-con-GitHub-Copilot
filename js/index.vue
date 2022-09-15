<template>
    <div>
        <h1>My App</h1>
        <p>{{ message }}</p>
    </div>
</template>

<script setup>
import {ref} from 'vue';

const message = ref('Hello World!');


</script>
